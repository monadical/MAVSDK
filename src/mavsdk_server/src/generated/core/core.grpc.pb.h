// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: core/core.proto
#ifndef GRPC_core_2fcore_2eproto__INCLUDED
#define GRPC_core_2fcore_2eproto__INCLUDED

#include "core/core.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace mavsdk {
namespace rpc {
namespace core {

// Access to the connection state and core configurations
class CoreService final {
 public:
  static constexpr char const* service_full_name() {
    return "mavsdk.rpc.core.CoreService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    //
    // Subscribe to 'connection state' updates.
    std::unique_ptr< ::grpc::ClientReaderInterface< ::mavsdk::rpc::core::ConnectionStateResponse>> SubscribeConnectionState(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::mavsdk::rpc::core::ConnectionStateResponse>>(SubscribeConnectionStateRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::core::ConnectionStateResponse>> AsyncSubscribeConnectionState(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::core::ConnectionStateResponse>>(AsyncSubscribeConnectionStateRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::core::ConnectionStateResponse>> PrepareAsyncSubscribeConnectionState(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::core::ConnectionStateResponse>>(PrepareAsyncSubscribeConnectionStateRaw(context, request, cq));
    }
    //
    // Set timeout of MAVLink transfers.
    //
    // The default timeout used is generally (0.5 seconds) seconds.
    // If MAVSDK is used on the same host this timeout can be reduced, while
    // if MAVSDK has to communicate over links with high latency it might
    // need to be increased to prevent timeouts.
    virtual ::grpc::Status SetMavlinkTimeout(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest& request, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>> AsyncSetMavlinkTimeout(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>>(AsyncSetMavlinkTimeoutRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>> PrepareAsyncSetMavlinkTimeout(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>>(PrepareAsyncSetMavlinkTimeoutRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      //
      // Subscribe to 'connection state' updates.
      virtual void SubscribeConnectionState(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::core::ConnectionStateResponse>* reactor) = 0;
      //
      // Set timeout of MAVLink transfers.
      //
      // The default timeout used is generally (0.5 seconds) seconds.
      // If MAVSDK is used on the same host this timeout can be reduced, while
      // if MAVSDK has to communicate over links with high latency it might
      // need to be increased to prevent timeouts.
      virtual void SetMavlinkTimeout(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* request, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SetMavlinkTimeout(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* request, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
  private:
    virtual ::grpc::ClientReaderInterface< ::mavsdk::rpc::core::ConnectionStateResponse>* SubscribeConnectionStateRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::core::ConnectionStateResponse>* AsyncSubscribeConnectionStateRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::core::ConnectionStateResponse>* PrepareAsyncSubscribeConnectionStateRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>* AsyncSetMavlinkTimeoutRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>* PrepareAsyncSetMavlinkTimeoutRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReader< ::mavsdk::rpc::core::ConnectionStateResponse>> SubscribeConnectionState(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::mavsdk::rpc::core::ConnectionStateResponse>>(SubscribeConnectionStateRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::core::ConnectionStateResponse>> AsyncSubscribeConnectionState(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::core::ConnectionStateResponse>>(AsyncSubscribeConnectionStateRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::core::ConnectionStateResponse>> PrepareAsyncSubscribeConnectionState(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::core::ConnectionStateResponse>>(PrepareAsyncSubscribeConnectionStateRaw(context, request, cq));
    }
    ::grpc::Status SetMavlinkTimeout(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest& request, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>> AsyncSetMavlinkTimeout(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>>(AsyncSetMavlinkTimeoutRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>> PrepareAsyncSetMavlinkTimeout(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>>(PrepareAsyncSetMavlinkTimeoutRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void SubscribeConnectionState(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::core::ConnectionStateResponse>* reactor) override;
      void SetMavlinkTimeout(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* request, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* response, std::function<void(::grpc::Status)>) override;
      void SetMavlinkTimeout(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* request, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReader< ::mavsdk::rpc::core::ConnectionStateResponse>* SubscribeConnectionStateRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request) override;
    ::grpc::ClientAsyncReader< ::mavsdk::rpc::core::ConnectionStateResponse>* AsyncSubscribeConnectionStateRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::mavsdk::rpc::core::ConnectionStateResponse>* PrepareAsyncSubscribeConnectionStateRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>* AsyncSetMavlinkTimeoutRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>* PrepareAsyncSetMavlinkTimeoutRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SubscribeConnectionState_;
    const ::grpc::internal::RpcMethod rpcmethod_SetMavlinkTimeout_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    //
    // Subscribe to 'connection state' updates.
    virtual ::grpc::Status SubscribeConnectionState(::grpc::ServerContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::core::ConnectionStateResponse>* writer);
    //
    // Set timeout of MAVLink transfers.
    //
    // The default timeout used is generally (0.5 seconds) seconds.
    // If MAVSDK is used on the same host this timeout can be reduced, while
    // if MAVSDK has to communicate over links with high latency it might
    // need to be increased to prevent timeouts.
    virtual ::grpc::Status SetMavlinkTimeout(::grpc::ServerContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* request, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SubscribeConnectionState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SubscribeConnectionState() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SubscribeConnectionState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeConnectionState(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::core::ConnectionStateResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribeConnectionState(::grpc::ServerContext* context, ::mavsdk::rpc::core::SubscribeConnectionStateRequest* request, ::grpc::ServerAsyncWriter< ::mavsdk::rpc::core::ConnectionStateResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SetMavlinkTimeout : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SetMavlinkTimeout() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SetMavlinkTimeout() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetMavlinkTimeout(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* /*request*/, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetMavlinkTimeout(::grpc::ServerContext* context, ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* request, ::grpc::ServerAsyncResponseWriter< ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SubscribeConnectionState<WithAsyncMethod_SetMavlinkTimeout<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_SubscribeConnectionState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SubscribeConnectionState() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::mavsdk::rpc::core::SubscribeConnectionStateRequest, ::mavsdk::rpc::core::ConnectionStateResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest* request) { return this->SubscribeConnectionState(context, request); }));
    }
    ~WithCallbackMethod_SubscribeConnectionState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeConnectionState(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::core::ConnectionStateResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::mavsdk::rpc::core::ConnectionStateResponse>* SubscribeConnectionState(
      ::grpc::CallbackServerContext* /*context*/, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest* /*request*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_SetMavlinkTimeout : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SetMavlinkTimeout() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::mavsdk::rpc::core::SetMavlinkTimeoutRequest, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* request, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* response) { return this->SetMavlinkTimeout(context, request, response); }));}
    void SetMessageAllocatorFor_SetMavlinkTimeout(
        ::grpc::MessageAllocator< ::mavsdk::rpc::core::SetMavlinkTimeoutRequest, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::mavsdk::rpc::core::SetMavlinkTimeoutRequest, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_SetMavlinkTimeout() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetMavlinkTimeout(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* /*request*/, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SetMavlinkTimeout(
      ::grpc::CallbackServerContext* /*context*/, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* /*request*/, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_SubscribeConnectionState<WithCallbackMethod_SetMavlinkTimeout<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SubscribeConnectionState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SubscribeConnectionState() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SubscribeConnectionState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeConnectionState(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::core::ConnectionStateResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SetMavlinkTimeout : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SetMavlinkTimeout() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SetMavlinkTimeout() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetMavlinkTimeout(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* /*request*/, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SubscribeConnectionState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SubscribeConnectionState() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SubscribeConnectionState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeConnectionState(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::core::ConnectionStateResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribeConnectionState(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_SetMavlinkTimeout : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SetMavlinkTimeout() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_SetMavlinkTimeout() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetMavlinkTimeout(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* /*request*/, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetMavlinkTimeout(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SubscribeConnectionState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SubscribeConnectionState() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->SubscribeConnectionState(context, request); }));
    }
    ~WithRawCallbackMethod_SubscribeConnectionState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeConnectionState(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::core::ConnectionStateResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* SubscribeConnectionState(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SetMavlinkTimeout : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SetMavlinkTimeout() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->SetMavlinkTimeout(context, request, response); }));
    }
    ~WithRawCallbackMethod_SetMavlinkTimeout() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetMavlinkTimeout(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* /*request*/, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SetMavlinkTimeout(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SetMavlinkTimeout : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SetMavlinkTimeout() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::mavsdk::rpc::core::SetMavlinkTimeoutRequest, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::mavsdk::rpc::core::SetMavlinkTimeoutRequest, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse>* streamer) {
                       return this->StreamedSetMavlinkTimeout(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_SetMavlinkTimeout() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SetMavlinkTimeout(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SetMavlinkTimeoutRequest* /*request*/, ::mavsdk::rpc::core::SetMavlinkTimeoutResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSetMavlinkTimeout(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::mavsdk::rpc::core::SetMavlinkTimeoutRequest,::mavsdk::rpc::core::SetMavlinkTimeoutResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SetMavlinkTimeout<Service > StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_SubscribeConnectionState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_SubscribeConnectionState() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::mavsdk::rpc::core::SubscribeConnectionStateRequest, ::mavsdk::rpc::core::ConnectionStateResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::mavsdk::rpc::core::SubscribeConnectionStateRequest, ::mavsdk::rpc::core::ConnectionStateResponse>* streamer) {
                       return this->StreamedSubscribeConnectionState(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_SubscribeConnectionState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SubscribeConnectionState(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::core::SubscribeConnectionStateRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::core::ConnectionStateResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedSubscribeConnectionState(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::mavsdk::rpc::core::SubscribeConnectionStateRequest,::mavsdk::rpc::core::ConnectionStateResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_SubscribeConnectionState<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_SubscribeConnectionState<WithStreamedUnaryMethod_SetMavlinkTimeout<Service > > StreamedService;
};

}  // namespace core
}  // namespace rpc
}  // namespace mavsdk


#endif  // GRPC_core_2fcore_2eproto__INCLUDED
