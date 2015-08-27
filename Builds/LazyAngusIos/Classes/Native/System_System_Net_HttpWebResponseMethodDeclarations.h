#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebResponse
struct HttpWebResponse_t4056;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4017;
// System.String
struct String_t;
// System.Uri
struct Uri_t758;
// System.Net.WebConnectionData
struct WebConnectionData_t4072;
// System.Net.CookieContainer
struct CookieContainer_t4023;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.IO.Stream
struct Stream_t51;
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
extern "C" void HttpWebResponse__ctor_m14027 (HttpWebResponse_t4056 * __this, Uri_t758 * ___uri, String_t* ___method, WebConnectionData_t4072 * ___data, CookieContainer_t4023 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse__ctor_m14028 (HttpWebResponse_t4056 * __this, SerializationInfo_t2920 * ___serializationInfo, StreamingContext_t2921  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m14029 (HttpWebResponse_t4056 * __this, SerializationInfo_t2920 * ___serializationInfo, StreamingContext_t2921  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern "C" void HttpWebResponse_System_IDisposable_Dispose_m14030 (HttpWebResponse_t4056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
extern "C" WebHeaderCollection_t4017 * HttpWebResponse_get_Headers_m14031 (HttpWebResponse_t4056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
extern "C" int32_t HttpWebResponse_get_StatusCode_m14032 (HttpWebResponse_t4056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
extern "C" String_t* HttpWebResponse_get_StatusDescription_m14033 (HttpWebResponse_t4056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
extern "C" void HttpWebResponse_ReadAll_m14034 (HttpWebResponse_t4056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
extern "C" Stream_t51 * HttpWebResponse_GetResponseStream_m14035 (HttpWebResponse_t4056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_GetObjectData_m14036 (HttpWebResponse_t4056 * __this, SerializationInfo_t2920 * ___serializationInfo, StreamingContext_t2921  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
extern "C" void HttpWebResponse_Close_m14037 (HttpWebResponse_t4056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern "C" void HttpWebResponse_Dispose_m14038 (HttpWebResponse_t4056 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
extern "C" void HttpWebResponse_CheckDisposed_m14039 (HttpWebResponse_t4056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
extern "C" void HttpWebResponse_FillCookies_m14040 (HttpWebResponse_t4056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
extern "C" void HttpWebResponse_SetCookie_m14041 (HttpWebResponse_t4056 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
extern "C" void HttpWebResponse_SetCookie2_m14042 (HttpWebResponse_t4056 * __this, String_t* ___cookies_str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
extern "C" DateTime_t287  HttpWebResponse_TryParseCookieExpires_m14043 (HttpWebResponse_t4056 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
