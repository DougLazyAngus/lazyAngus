#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebRequest
struct WebRequest_t1506;
// System.Net.ICredentials
struct ICredentials_t1502;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1482;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t1503;
// System.Uri
struct Uri_t574;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Exception
struct Exception_t27;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t1500;
// System.Net.IWebRequestCreate
struct IWebRequestCreate_t1690;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebRequest::.ctor()
extern "C" void WebRequest__ctor_m7738 (WebRequest_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest__ctor_m7739 (WebRequest_t1506 * __this, SerializationInfo_t1220 * ___serializationInfo, StreamingContext_t1221  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
extern "C" void WebRequest__cctor_m7740 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m7741 (WebRequest_t1506 * __this, SerializationInfo_t1220 * ___serializationInfo, StreamingContext_t1221  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
extern "C" void WebRequest_AddDynamicPrefix_m7742 (Object_t * __this /* static, unused */, String_t* ___protocol, String_t* ___implementor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
extern "C" Exception_t27 * WebRequest_GetMustImplement_m7743 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebRequest::get_ContentLength()
extern "C" int64_t WebRequest_get_ContentLength_m7744 (WebRequest_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebRequest::get_Credentials()
extern "C" Object_t * WebRequest_get_Credentials_m7745 (WebRequest_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void WebRequest_set_Credentials_m7746 (WebRequest_t1506 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
extern "C" WebHeaderCollection_t1482 * WebRequest_get_Headers_m7747 (WebRequest_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_Method()
extern "C" String_t* WebRequest_get_Method_m7748 (WebRequest_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
extern "C" Object_t * WebRequest_get_Proxy_m7749 (WebRequest_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebRequest::get_RequestUri()
extern "C" Uri_t574 * WebRequest_get_RequestUri_m7750 (WebRequest_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern "C" Object_t * WebRequest_get_DefaultWebProxy_m7751 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
extern "C" Object_t * WebRequest_GetDefaultWebProxy_m7752 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::Abort()
extern "C" void WebRequest_Abort_m7753 (WebRequest_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * WebRequest_BeginGetResponse_m7754 (WebRequest_t1506 * __this, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C" WebRequest_t1506 * WebRequest_Create_m7755 (Object_t * __this /* static, unused */, Uri_t574 * ___requestUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t1500 * WebRequest_EndGetResponse_m7756 (WebRequest_t1506 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::GetResponse()
extern "C" WebResponse_t1500 * WebRequest_GetResponse_m7757 (WebRequest_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_GetObjectData_m7758 (WebRequest_t1506 * __this, SerializationInfo_t1220 * ___serializationInfo, StreamingContext_t1221  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebRequestCreate System.Net.WebRequest::GetCreator(System.String)
extern "C" Object_t * WebRequest_GetCreator_m7759 (Object_t * __this /* static, unused */, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
extern "C" void WebRequest_AddPrefix_m7760 (Object_t * __this /* static, unused */, String_t* ___prefix, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
