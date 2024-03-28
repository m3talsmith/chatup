#include <iostream>
#include <memory>
#include <string>

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>

#include "chatup.grpc.pb.h"
#include "include/Client.h"
#include "include/TimeHelpers.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using chatup::ChatupApi;
using chatup::Message;
using chatup::internal::timehelpers::epoch;

chatup::internal::Client::Client(std::string uri, std::string name) : name(name)
{
    auto channel(grpc::CreateChannel(uri, grpc::InsecureChannelCredentials()));
    stub_ = ChatupApi::NewStub(channel);
}

void chatup::internal::Client::send_message(std::string content)
{
    Message message{Message()};
    message.set_from(name);
    message.set_timestamp(epoch());
    message.set_content(content.c_str());

    ::google::protobuf::Empty reply;
    ClientContext context;
    Status status = stub_->Send(&context, message, &reply);

    if (!status.ok()) {
        fprintf(stderr, "\nerror sending message: %s (%d)\n", status.error_message().c_str(), status.error_code());
    }
}