#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t4428;
// System.Uri
struct Uri_t775;
// System.Net.ICredentials
struct ICredentials_t3555;
// System.String[]
struct StringU5BU5D_t75;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m17137 (WebProxy_t4428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri)
extern "C" void WebProxy__ctor_m17138 (WebProxy_t4428 * __this, Uri_t775 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m17139 (WebProxy_t4428 * __this, Uri_t775 * ___address, bool ___bypassOnLocal, StringU5BU5D_t75* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m17140 (WebProxy_t4428 * __this, SerializationInfo_t2940 * ___serializationInfo, StreamingContext_t2941  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m17141 (WebProxy_t4428 * __this, SerializationInfo_t2940 * ___serializationInfo, StreamingContext_t2941  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_Address(System.Uri)
extern "C" void WebProxy_set_Address_m17142 (WebProxy_t4428 * __this, Uri_t775 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_BypassProxyOnLocal(System.Boolean)
extern "C" void WebProxy_set_BypassProxyOnLocal_m17143 (WebProxy_t4428 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebProxy::get_Credentials()
extern "C" Object_t * WebProxy_get_Credentials_m17144 (WebProxy_t4428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m17145 (WebProxy_t4428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t775 * WebProxy_GetProxy_m17146 (WebProxy_t4428 * __this, Uri_t775 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m17147 (WebProxy_t4428 * __this, Uri_t775 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m17148 (WebProxy_t4428 * __this, SerializationInfo_t2940 * ___serializationInfo, StreamingContext_t2941  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m17149 (WebProxy_t4428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
