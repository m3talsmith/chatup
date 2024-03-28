#include <string>
#include <iostream>
#include <memory>
#include <cstdlib>
#include <thread>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"

#include "include/Client.h"
#include "include/Server.h"

using chatup::internal::Client;
using chatup::internal::Server;

ABSL_FLAG(std::string, peer, "localhost:3000", "Chatup user peer");
ABSL_FLAG(long, port, 0, "Chatup service port");
ABSL_FLAG(std::string, name, "anonymous", "Chatup user name");

long random_port() {
    return rand() % 100 + 40000;
}

int main(int argc, char* argv[]) {
    absl::ParseCommandLine(argc, argv);

    std::string peer = absl::GetFlag(FLAGS_peer);

    long port = absl::GetFlag(FLAGS_port);
    if (port == 0) port = random_port();

    char host [32];
    sprintf(host, "localhost:%ld", port);

    std::string name = absl::GetFlag(FLAGS_name);

    printf("peer: %s, port: %ld, host: %s, name: %s\n", peer.c_str(), port, host, name.c_str());

    std::thread service([host] {
        std::string uri(host);
        Server server(uri);
        server.listen();
    });

    Client client(peer, name);

    std::string chat_input;
    while (true) {
        std::getline(std::cin, chat_input);
        client.send_message(chat_input);
    }

    return 0;
}