#include <iostream>
#include <memory>
#include <string>
#include <thread>

#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>

#include "chatup.grpc.pb.h"
#include "include/Server.h"

using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using chatup::ChatupApi;
using chatup::Message;

class Service final : public ChatupApi::Service {
    public:
        Status Send(ServerContext* context, const Message* message, ::google::protobuf::Empty* response) override {
            fprintf(stdout, "\n[%s] %s\n", message->from().c_str(), message->content().c_str());
            return Status::OK;
        }
};

chatup::internal::Server::Server(std::string uri) : uri(uri) {}

void chatup::internal::Server::listen()
{
    Service service;

    grpc::EnableDefaultHealthCheckService(true);
    grpc::reflection::InitProtoReflectionServerBuilderPlugin();
    ServerBuilder builder;

    builder.AddListeningPort(uri, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<grpc::Server> server = builder.BuildAndStart();
    fprintf(stdout, "\nserver listening on %s\n", uri.c_str());

    server->Wait();
}