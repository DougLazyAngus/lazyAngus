#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequest
struct FileWebRequest_t2015;
// System.Net.ICredentials
struct ICredentials_t1681;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2001;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t2018;
// System.Uri
struct Uri_t655;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Exception
struct Exception_t27;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t1704;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern "C" void FileWebRequest__ctor_m10264 (FileWebRequest_t2015 * __this, Uri_t655 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest__ctor_m10265 (FileWebRequest_t2015 * __this, SerializationInfo_t1300 * ___serializationInfo, StreamingContext_t1301  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m10266 (FileWebRequest_t2015 * __this, SerializationInfo_t1300 * ___serializationInfo, StreamingContext_t1301  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebRequest::get_ContentLength()
extern "C" int64_t FileWebRequest_get_ContentLength_m10267 (FileWebRequest_t2015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
extern "C" Object_t * FileWebRequest_get_Credentials_m10268 (FileWebRequest_t2015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void FileWebRequest_set_Credentials_m10269 (FileWebRequest_t2015 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
extern "C" WebHeaderCollection_t2001 * FileWebRequest_get_Headers_m10270 (FileWebRequest_t2015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_Method()
extern "C" String_t* FileWebRequest_get_Method_m10271 (FileWebRequest_t2015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
extern "C" Object_t * FileWebRequest_get_Proxy_m10272 (FileWebRequest_t2015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebRequest::get_RequestUri()
extern "C" Uri_t655 * FileWebRequest_get_RequestUri_m10273 (FileWebRequest_t2015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FileWebRequest::GetMustImplement()
extern "C" Exception_t27 * FileWebRequest_GetMustImplement_m10274 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Abort()
extern "C" void FileWebRequest_Abort_m10275 (FileWebRequest_t2015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * FileWebRequest_BeginGetResponse_m10276 (FileWebRequest_t2015 * __this, AsyncCallback_t344 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t1704 * FileWebRequest_EndGetResponse_m10277 (FileWebRequest_t2015 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponse()
extern "C" WebResponse_t1704 * FileWebRequest_GetResponse_m10278 (FileWebRequest_t2015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponseInternal()
extern "C" WebResponse_t1704 * FileWebRequest_GetResponseInternal_m10279 (FileWebRequest_t2015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest_GetObjectData_m10280 (FileWebRequest_t2015 * __this, SerializationInfo_t1300 * ___serializationInfo, StreamingContext_t1301  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Close()
extern "C" void FileWebRequest_Close_m10281 (FileWebRequest_t2015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
