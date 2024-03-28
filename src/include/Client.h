#ifndef CLIENT_H
#define CLIENT_H

#include <grpc/grpc.h>
#include <grpcpp/channel.h>

#include "../chatup.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;

using chatup::ChatupApi;
using chatup::Message;

namespace chatup {
    namespace internal {
        class Client {
            public:
                std::string name;

                Client(std::string uri, std::string name);

                void send_message(std::string content);
            private:
                std::unique_ptr<ChatupApi::Stub> stub_;
        };
    };
};

#endif // CLIENT_H