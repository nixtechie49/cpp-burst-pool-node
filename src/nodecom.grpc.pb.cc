// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: nodecom.proto

#include "nodecom.pb.h"
#include "nodecom.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace nodecom {

static const char* NodeCom_method_names[] = {
  "/nodecom.NodeCom/SubmitNonce",
};

std::unique_ptr< NodeCom::Stub> NodeCom::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< NodeCom::Stub> stub(new NodeCom::Stub(channel));
  return stub;
}

NodeCom::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SubmitNonce_(NodeCom_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status NodeCom::Stub::SubmitNonce(::grpc::ClientContext* context, const ::nodecom::SubmitNonceRequest& request, ::nodecom::SubmitNonceReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SubmitNonce_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::nodecom::SubmitNonceReply>* NodeCom::Stub::AsyncSubmitNonceRaw(::grpc::ClientContext* context, const ::nodecom::SubmitNonceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::nodecom::SubmitNonceReply>::Create(channel_.get(), cq, rpcmethod_SubmitNonce_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::nodecom::SubmitNonceReply>* NodeCom::Stub::PrepareAsyncSubmitNonceRaw(::grpc::ClientContext* context, const ::nodecom::SubmitNonceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::nodecom::SubmitNonceReply>::Create(channel_.get(), cq, rpcmethod_SubmitNonce_, context, request, false);
}

NodeCom::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NodeCom_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NodeCom::Service, ::nodecom::SubmitNonceRequest, ::nodecom::SubmitNonceReply>(
          std::mem_fn(&NodeCom::Service::SubmitNonce), this)));
}

NodeCom::Service::~Service() {
}

::grpc::Status NodeCom::Service::SubmitNonce(::grpc::ServerContext* context, const ::nodecom::SubmitNonceRequest* request, ::nodecom::SubmitNonceReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace nodecom
