#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t5175;
// System.Runtime.Remoting.Identity
struct Identity_t5113;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t5114;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern "C" void RealProxy__ctor_m22882 (RealProxy_t5175 * __this, Type_t * ___classToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C" void RealProxy__ctor_m22883 (RealProxy_t5175 * __this, Type_t * ___classToProxy, ClientIdentity_t5114 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern "C" void RealProxy__ctor_m22884 (RealProxy_t5175 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C" Type_t * RealProxy_InternalGetProxyType_m22885 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern "C" Type_t * RealProxy_GetProxiedType_m22886 (RealProxy_t5175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RealProxy_GetObjectData_m22887 (RealProxy_t5175 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern "C" Identity_t5113 * RealProxy_get_ObjectIdentity_m22888 (RealProxy_t5175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::set_ObjectIdentity(System.Runtime.Remoting.Identity)
extern "C" void RealProxy_set_ObjectIdentity_m22889 (RealProxy_t5175 * __this, Identity_t5113 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C" Object_t * RealProxy_InternalGetTransparentProxy_m22890 (RealProxy_t5175 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern "C" Object_t * RealProxy_GetTransparentProxy_m22891 (RealProxy_t5175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern "C" void RealProxy_SetTargetDomain_m22892 (RealProxy_t5175 * __this, int32_t ___domainId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
