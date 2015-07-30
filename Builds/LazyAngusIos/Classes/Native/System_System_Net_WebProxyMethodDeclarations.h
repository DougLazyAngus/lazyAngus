#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t4027;
// System.Net.ICredentials
struct ICredentials_t3233;
// System.Uri
struct Uri_t707;
// System.String[]
struct StringU5BU5D_t75;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m14024 (WebProxy_t4027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m14025 (WebProxy_t4027 * __this, Uri_t707 * ___address, bool ___bypassOnLocal, StringU5BU5D_t75* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m14026 (WebProxy_t4027 * __this, SerializationInfo_t2867 * ___serializationInfo, StreamingContext_t2868  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m14027 (WebProxy_t4027 * __this, SerializationInfo_t2867 * ___serializationInfo, StreamingContext_t2868  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebProxy::get_Credentials()
extern "C" Object_t * WebProxy_get_Credentials_m14028 (WebProxy_t4027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m14029 (WebProxy_t4027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t707 * WebProxy_GetProxy_m14030 (WebProxy_t4027 * __this, Uri_t707 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m14031 (WebProxy_t4027 * __this, Uri_t707 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m14032 (WebProxy_t4027 * __this, SerializationInfo_t2867 * ___serializationInfo, StreamingContext_t2868  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m14033 (WebProxy_t4027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
