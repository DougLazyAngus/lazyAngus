#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t4435;
// System.Uri
struct Uri_t782;
// System.Net.ICredentials
struct ICredentials_t3562;
// System.String[]
struct StringU5BU5D_t75;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m17194 (WebProxy_t4435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri)
extern "C" void WebProxy__ctor_m17195 (WebProxy_t4435 * __this, Uri_t782 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m17196 (WebProxy_t4435 * __this, Uri_t782 * ___address, bool ___bypassOnLocal, StringU5BU5D_t75* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m17197 (WebProxy_t4435 * __this, SerializationInfo_t2947 * ___serializationInfo, StreamingContext_t2948  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m17198 (WebProxy_t4435 * __this, SerializationInfo_t2947 * ___serializationInfo, StreamingContext_t2948  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_Address(System.Uri)
extern "C" void WebProxy_set_Address_m17199 (WebProxy_t4435 * __this, Uri_t782 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_BypassProxyOnLocal(System.Boolean)
extern "C" void WebProxy_set_BypassProxyOnLocal_m17200 (WebProxy_t4435 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebProxy::get_Credentials()
extern "C" Object_t * WebProxy_get_Credentials_m17201 (WebProxy_t4435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m17202 (WebProxy_t4435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t782 * WebProxy_GetProxy_m17203 (WebProxy_t4435 * __this, Uri_t782 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m17204 (WebProxy_t4435 * __this, Uri_t782 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m17205 (WebProxy_t4435 * __this, SerializationInfo_t2947 * ___serializationInfo, StreamingContext_t2948  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m17206 (WebProxy_t4435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
