#ifndef SERVER_H
#define SERVER_H

namespace chatup {
    namespace internal {
        class Server {
            public:
                std::string uri;

                Server(std::string uri);
                void listen();
        };
    };
};

#endif // SERVER_H