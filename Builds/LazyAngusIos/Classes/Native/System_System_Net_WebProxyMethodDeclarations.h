﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t2067;
// System.Net.ICredentials
struct ICredentials_t1682;
// System.Uri
struct Uri_t656;
// System.String[]
struct StringU5BU5D_t45;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m10759 (WebProxy_t2067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m10760 (WebProxy_t2067 * __this, Uri_t656 * ___address, bool ___bypassOnLocal, StringU5BU5D_t45* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m10761 (WebProxy_t2067 * __this, SerializationInfo_t1301 * ___serializationInfo, StreamingContext_t1302  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m10762 (WebProxy_t2067 * __this, SerializationInfo_t1301 * ___serializationInfo, StreamingContext_t1302  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebProxy::get_Credentials()
extern "C" Object_t * WebProxy_get_Credentials_m10763 (WebProxy_t2067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m10764 (WebProxy_t2067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t656 * WebProxy_GetProxy_m10765 (WebProxy_t2067 * __this, Uri_t656 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m10766 (WebProxy_t2067 * __this, Uri_t656 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m10767 (WebProxy_t2067 * __this, SerializationInfo_t1301 * ___serializationInfo, StreamingContext_t1302  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m10768 (WebProxy_t2067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
