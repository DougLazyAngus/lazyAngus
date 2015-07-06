#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebResponse
struct HttpWebResponse_t1531;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1482;
// System.String
struct String_t;
// System.Uri
struct Uri_t574;
// System.Net.WebConnectionData
struct WebConnectionData_t1553;
// System.Net.CookieContainer
struct CookieContainer_t1488;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.IO.Stream
struct Stream_t24;
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
extern "C" void HttpWebResponse__ctor_m7431 (HttpWebResponse_t1531 * __this, Uri_t574 * ___uri, String_t* ___method, WebConnectionData_t1553 * ___data, CookieContainer_t1488 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse__ctor_m7432 (HttpWebResponse_t1531 * __this, SerializationInfo_t1220 * ___serializationInfo, StreamingContext_t1221  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m7433 (HttpWebResponse_t1531 * __this, SerializationInfo_t1220 * ___serializationInfo, StreamingContext_t1221  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern "C" void HttpWebResponse_System_IDisposable_Dispose_m7434 (HttpWebResponse_t1531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
extern "C" WebHeaderCollection_t1482 * HttpWebResponse_get_Headers_m7435 (HttpWebResponse_t1531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
extern "C" int32_t HttpWebResponse_get_StatusCode_m7436 (HttpWebResponse_t1531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
extern "C" String_t* HttpWebResponse_get_StatusDescription_m7437 (HttpWebResponse_t1531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
extern "C" void HttpWebResponse_ReadAll_m7438 (HttpWebResponse_t1531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
extern "C" Stream_t24 * HttpWebResponse_GetResponseStream_m7439 (HttpWebResponse_t1531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_GetObjectData_m7440 (HttpWebResponse_t1531 * __this, SerializationInfo_t1220 * ___serializationInfo, StreamingContext_t1221  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
extern "C" void HttpWebResponse_Close_m7441 (HttpWebResponse_t1531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern "C" void HttpWebResponse_Dispose_m7442 (HttpWebResponse_t1531 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
extern "C" void HttpWebResponse_CheckDisposed_m7443 (HttpWebResponse_t1531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
extern "C" void HttpWebResponse_FillCookies_m7444 (HttpWebResponse_t1531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
extern "C" void HttpWebResponse_SetCookie_m7445 (HttpWebResponse_t1531 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
extern "C" void HttpWebResponse_SetCookie2_m7446 (HttpWebResponse_t1531 * __this, String_t* ___cookies_str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
extern "C" DateTime_t219  HttpWebResponse_TryParseCookieExpires_m7447 (HttpWebResponse_t1531 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
