#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.RemotingServices
struct RemotingServices_t4640;
// System.Reflection.MethodBase
struct MethodBase_t1525;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t4632;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t4624;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t4616;
// System.Type[]
struct TypeU5BU5D_t1203;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t4629;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Runtime.Remoting.Identity
struct Identity_t4626;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t4633;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t4356;
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern "C" void RemotingServices__cctor_m18412 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C" MethodBase_t1525 * RemotingServices_GetVirtualMethod_m18413 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t1525 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C" bool RemotingServices_IsTransparentProxy_m18414 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern "C" Type_t * RemotingServices_GetServerTypeForUri_m18415 (Object_t * __this /* static, unused */, String_t* ___URI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern "C" Object_t * RemotingServices_Unmarshal_m18416 (Object_t * __this /* static, unused */, ObjRef_t4632 * ___objectRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern "C" Object_t * RemotingServices_Unmarshal_m18417 (Object_t * __this /* static, unused */, ObjRef_t4632 * ___objectRef, bool ___fRefine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern "C" RealProxy_t4624 * RemotingServices_GetRealProxy_m18418 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" MethodBase_t1525 * RemotingServices_GetMethodBaseFromMethodMessage_m18419 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern "C" MethodBase_t1525 * RemotingServices_GetMethodBaseFromName_m18420 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1203* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern "C" MethodBase_t1525 * RemotingServices_FindInterfaceMethod_m18421 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1203* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern "C" Object_t * RemotingServices_CreateClientProxy_m18422 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t4629 * ___entry, ObjectU5BU5D_t682* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern "C" Object_t * RemotingServices_CreateClientProxyForContextBound_m18423 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t682* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern "C" Identity_t4626 * RemotingServices_GetIdentityForUri_m18424 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern "C" String_t* RemotingServices_RemoveAppNameFromUri_m18425 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern "C" ClientIdentity_t4633 * RemotingServices_GetOrCreateClientIdentity_m18426 (Object_t * __this /* static, unused */, ObjRef_t4632 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C" ServerIdentity_t4356 * RemotingServices_CreateWellKnownServerIdentity_m18427 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C" void RemotingServices_RegisterServerIdentity_m18428 (Object_t * __this /* static, unused */, ServerIdentity_t4356 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C" Object_t * RemotingServices_GetProxyForRemoteObject_m18429 (Object_t * __this /* static, unused */, ObjRef_t4632 * ___objref, Type_t * ___classToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C" Object_t * RemotingServices_GetRemoteObject_m18430 (Object_t * __this /* static, unused */, ObjRef_t4632 * ___objRef, Type_t * ___proxyType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern "C" void RemotingServices_RegisterInternalChannels_m18431 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern "C" void RemotingServices_DisposeIdentity_m18432 (Object_t * __this /* static, unused */, Identity_t4626 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C" String_t* RemotingServices_GetNormalizedUri_m18433 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
