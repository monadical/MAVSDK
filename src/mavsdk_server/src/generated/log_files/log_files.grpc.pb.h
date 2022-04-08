// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: log_files/log_files.proto
#ifndef GRPC_log_5ffiles_2flog_5ffiles_2eproto__INCLUDED
#define GRPC_log_5ffiles_2flog_5ffiles_2eproto__INCLUDED

#include "log_files/log_files.pb.h"

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
namespace log_files {

// Allow to download log files from the vehicle after a flight is complete.
// For log streaming during flight check the logging plugin.
class LogFilesService final {
 public:
  static constexpr char const* service_full_name() {
    return "mavsdk.rpc.log_files.LogFilesService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Get List of log files.
    virtual ::grpc::Status GetEntries(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest& request, ::mavsdk::rpc::log_files::GetEntriesResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::log_files::GetEntriesResponse>> AsyncGetEntries(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::log_files::GetEntriesResponse>>(AsyncGetEntriesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::log_files::GetEntriesResponse>> PrepareAsyncGetEntries(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::log_files::GetEntriesResponse>>(PrepareAsyncGetEntriesRaw(context, request, cq));
    }
    // Download log file.
    std::unique_ptr< ::grpc::ClientReaderInterface< ::mavsdk::rpc::log_files::DownloadLogFileResponse>> SubscribeDownloadLogFile(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::mavsdk::rpc::log_files::DownloadLogFileResponse>>(SubscribeDownloadLogFileRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::log_files::DownloadLogFileResponse>> AsyncSubscribeDownloadLogFile(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::log_files::DownloadLogFileResponse>>(AsyncSubscribeDownloadLogFileRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::log_files::DownloadLogFileResponse>> PrepareAsyncSubscribeDownloadLogFile(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::log_files::DownloadLogFileResponse>>(PrepareAsyncSubscribeDownloadLogFileRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Get List of log files.
      virtual void GetEntries(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest* request, ::mavsdk::rpc::log_files::GetEntriesResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetEntries(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest* request, ::mavsdk::rpc::log_files::GetEntriesResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      // Download log file.
      virtual void SubscribeDownloadLogFile(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::log_files::GetEntriesResponse>* AsyncGetEntriesRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::log_files::GetEntriesResponse>* PrepareAsyncGetEntriesRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* SubscribeDownloadLogFileRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* AsyncSubscribeDownloadLogFileRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* PrepareAsyncSubscribeDownloadLogFileRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status GetEntries(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest& request, ::mavsdk::rpc::log_files::GetEntriesResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::log_files::GetEntriesResponse>> AsyncGetEntries(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::log_files::GetEntriesResponse>>(AsyncGetEntriesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::log_files::GetEntriesResponse>> PrepareAsyncGetEntries(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::log_files::GetEntriesResponse>>(PrepareAsyncGetEntriesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::mavsdk::rpc::log_files::DownloadLogFileResponse>> SubscribeDownloadLogFile(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::mavsdk::rpc::log_files::DownloadLogFileResponse>>(SubscribeDownloadLogFileRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::log_files::DownloadLogFileResponse>> AsyncSubscribeDownloadLogFile(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::log_files::DownloadLogFileResponse>>(AsyncSubscribeDownloadLogFileRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::log_files::DownloadLogFileResponse>> PrepareAsyncSubscribeDownloadLogFile(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::log_files::DownloadLogFileResponse>>(PrepareAsyncSubscribeDownloadLogFileRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GetEntries(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest* request, ::mavsdk::rpc::log_files::GetEntriesResponse* response, std::function<void(::grpc::Status)>) override;
      void GetEntries(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest* request, ::mavsdk::rpc::log_files::GetEntriesResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void SubscribeDownloadLogFile(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::log_files::GetEntriesResponse>* AsyncGetEntriesRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::log_files::GetEntriesResponse>* PrepareAsyncGetEntriesRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* SubscribeDownloadLogFileRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request) override;
    ::grpc::ClientAsyncReader< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* AsyncSubscribeDownloadLogFileRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* PrepareAsyncSubscribeDownloadLogFileRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetEntries_;
    const ::grpc::internal::RpcMethod rpcmethod_SubscribeDownloadLogFile_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Get List of log files.
    virtual ::grpc::Status GetEntries(::grpc::ServerContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest* request, ::mavsdk::rpc::log_files::GetEntriesResponse* response);
    // Download log file.
    virtual ::grpc::Status SubscribeDownloadLogFile(::grpc::ServerContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetEntries() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetEntries(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::GetEntriesRequest* /*request*/, ::mavsdk::rpc::log_files::GetEntriesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetEntries(::grpc::ServerContext* context, ::mavsdk::rpc::log_files::GetEntriesRequest* request, ::grpc::ServerAsyncResponseWriter< ::mavsdk::rpc::log_files::GetEntriesResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SubscribeDownloadLogFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SubscribeDownloadLogFile() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SubscribeDownloadLogFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeDownloadLogFile(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribeDownloadLogFile(::grpc::ServerContext* context, ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* request, ::grpc::ServerAsyncWriter< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetEntries<WithAsyncMethod_SubscribeDownloadLogFile<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GetEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetEntries() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::mavsdk::rpc::log_files::GetEntriesRequest, ::mavsdk::rpc::log_files::GetEntriesResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::mavsdk::rpc::log_files::GetEntriesRequest* request, ::mavsdk::rpc::log_files::GetEntriesResponse* response) { return this->GetEntries(context, request, response); }));}
    void SetMessageAllocatorFor_GetEntries(
        ::grpc::MessageAllocator< ::mavsdk::rpc::log_files::GetEntriesRequest, ::mavsdk::rpc::log_files::GetEntriesResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::mavsdk::rpc::log_files::GetEntriesRequest, ::mavsdk::rpc::log_files::GetEntriesResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GetEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetEntries(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::GetEntriesRequest* /*request*/, ::mavsdk::rpc::log_files::GetEntriesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetEntries(
      ::grpc::CallbackServerContext* /*context*/, const ::mavsdk::rpc::log_files::GetEntriesRequest* /*request*/, ::mavsdk::rpc::log_files::GetEntriesResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_SubscribeDownloadLogFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SubscribeDownloadLogFile() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest, ::mavsdk::rpc::log_files::DownloadLogFileResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* request) { return this->SubscribeDownloadLogFile(context, request); }));
    }
    ~WithCallbackMethod_SubscribeDownloadLogFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeDownloadLogFile(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* SubscribeDownloadLogFile(
      ::grpc::CallbackServerContext* /*context*/, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* /*request*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_GetEntries<WithCallbackMethod_SubscribeDownloadLogFile<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetEntries() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetEntries(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::GetEntriesRequest* /*request*/, ::mavsdk::rpc::log_files::GetEntriesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SubscribeDownloadLogFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SubscribeDownloadLogFile() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SubscribeDownloadLogFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeDownloadLogFile(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetEntries() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetEntries(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::GetEntriesRequest* /*request*/, ::mavsdk::rpc::log_files::GetEntriesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetEntries(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_SubscribeDownloadLogFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SubscribeDownloadLogFile() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_SubscribeDownloadLogFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeDownloadLogFile(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribeDownloadLogFile(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetEntries() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetEntries(context, request, response); }));
    }
    ~WithRawCallbackMethod_GetEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetEntries(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::GetEntriesRequest* /*request*/, ::mavsdk::rpc::log_files::GetEntriesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetEntries(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SubscribeDownloadLogFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SubscribeDownloadLogFile() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->SubscribeDownloadLogFile(context, request); }));
    }
    ~WithRawCallbackMethod_SubscribeDownloadLogFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeDownloadLogFile(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* SubscribeDownloadLogFile(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetEntries() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::mavsdk::rpc::log_files::GetEntriesRequest, ::mavsdk::rpc::log_files::GetEntriesResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::mavsdk::rpc::log_files::GetEntriesRequest, ::mavsdk::rpc::log_files::GetEntriesResponse>* streamer) {
                       return this->StreamedGetEntries(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetEntries(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::GetEntriesRequest* /*request*/, ::mavsdk::rpc::log_files::GetEntriesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetEntries(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::mavsdk::rpc::log_files::GetEntriesRequest,::mavsdk::rpc::log_files::GetEntriesResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetEntries<Service > StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_SubscribeDownloadLogFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_SubscribeDownloadLogFile() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest, ::mavsdk::rpc::log_files::DownloadLogFileResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest, ::mavsdk::rpc::log_files::DownloadLogFileResponse>* streamer) {
                       return this->StreamedSubscribeDownloadLogFile(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_SubscribeDownloadLogFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SubscribeDownloadLogFile(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::log_files::DownloadLogFileResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedSubscribeDownloadLogFile(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::mavsdk::rpc::log_files::SubscribeDownloadLogFileRequest,::mavsdk::rpc::log_files::DownloadLogFileResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_SubscribeDownloadLogFile<Service > SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetEntries<WithSplitStreamingMethod_SubscribeDownloadLogFile<Service > > StreamedService;
};

}  // namespace log_files
}  // namespace rpc
}  // namespace mavsdk


#endif  // GRPC_log_5ffiles_2flog_5ffiles_2eproto__INCLUDED
