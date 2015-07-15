#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebResponse
struct HttpWebResponse_t1556;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1507;
// System.String
struct String_t;
// System.Uri
struct Uri_t595;
// System.Net.WebConnectionData
struct WebConnectionData_t1578;
// System.Net.CookieContainer
struct CookieContainer_t1513;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.IO.Stream
struct Stream_t24;
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
extern "C" void HttpWebResponse__ctor_m7611 (HttpWebResponse_t1556 * __this, Uri_t595 * ___uri, String_t* ___method, WebConnectionData_t1578 * ___data, CookieContainer_t1513 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse__ctor_m7612 (HttpWebResponse_t1556 * __this, SerializationInfo_t1247 * ___serializationInfo, StreamingContext_t1248  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m7613 (HttpWebResponse_t1556 * __this, SerializationInfo_t1247 * ___serializationInfo, StreamingContext_t1248  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern "C" void HttpWebResponse_System_IDisposable_Dispose_m7614 (HttpWebResponse_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
extern "C" WebHeaderCollection_t1507 * HttpWebResponse_get_Headers_m7615 (HttpWebResponse_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
extern "C" int32_t HttpWebResponse_get_StatusCode_m7616 (HttpWebResponse_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
extern "C" String_t* HttpWebResponse_get_StatusDescription_m7617 (HttpWebResponse_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
extern "C" void HttpWebResponse_ReadAll_m7618 (HttpWebResponse_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
extern "C" Stream_t24 * HttpWebResponse_GetResponseStream_m7619 (HttpWebResponse_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_GetObjectData_m7620 (HttpWebResponse_t1556 * __this, SerializationInfo_t1247 * ___serializationInfo, StreamingContext_t1248  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
extern "C" void HttpWebResponse_Close_m7621 (HttpWebResponse_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern "C" void HttpWebResponse_Dispose_m7622 (HttpWebResponse_t1556 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
extern "C" void HttpWebResponse_CheckDisposed_m7623 (HttpWebResponse_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
extern "C" void HttpWebResponse_FillCookies_m7624 (HttpWebResponse_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
extern "C" void HttpWebResponse_SetCookie_m7625 (HttpWebResponse_t1556 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
extern "C" void HttpWebResponse_SetCookie2_m7626 (HttpWebResponse_t1556 * __this, String_t* ___cookies_str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
extern "C" DateTime_t219  HttpWebResponse_TryParseCookieExpires_m7627 (HttpWebResponse_t1556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
