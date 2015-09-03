#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.RemotingServices
struct RemotingServices_t5121;
// System.Reflection.MethodBase
struct MethodBase_t1542;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t5112;
// System.MarshalByRefObject
struct MarshalByRefObject_t4288;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t5175;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t5166;
// System.Type[]
struct TypeU5BU5D_t1220;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t5109;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Runtime.Remoting.Identity
struct Identity_t5113;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t5114;
// System.Runtime.Remoting.ClientActivatedIdentity
struct ClientActivatedIdentity_t5124;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t4744;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern "C" void RemotingServices__cctor_m22609 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C" MethodBase_t1542 * RemotingServices_GetVirtualMethod_m22610 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t1542 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C" bool RemotingServices_IsTransparentProxy_m22611 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern "C" Type_t * RemotingServices_GetServerTypeForUri_m22612 (Object_t * __this /* static, unused */, String_t* ___URI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern "C" Object_t * RemotingServices_Unmarshal_m22613 (Object_t * __this /* static, unused */, ObjRef_t5112 * ___objectRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern "C" Object_t * RemotingServices_Unmarshal_m22614 (Object_t * __this /* static, unused */, ObjRef_t5112 * ___objectRef, bool ___fRefine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.RemotingServices::Marshal(System.MarshalByRefObject)
extern "C" ObjRef_t5112 * RemotingServices_Marshal_m22615 (Object_t * __this /* static, unused */, MarshalByRefObject_t4288 * ___Obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.RemotingServices::Marshal(System.MarshalByRefObject,System.String,System.Type)
extern "C" ObjRef_t5112 * RemotingServices_Marshal_m22616 (Object_t * __this /* static, unused */, MarshalByRefObject_t4288 * ___Obj, String_t* ___ObjURI, Type_t * ___RequestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::NewUri()
extern "C" String_t* RemotingServices_NewUri_m22617 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern "C" RealProxy_t5175 * RemotingServices_GetRealProxy_m22618 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" MethodBase_t1542 * RemotingServices_GetMethodBaseFromMethodMessage_m22619 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern "C" MethodBase_t1542 * RemotingServices_GetMethodBaseFromName_m22620 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1220* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern "C" MethodBase_t1542 * RemotingServices_FindInterfaceMethod_m22621 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1220* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RemotingServices_GetObjectData_m22622 (Object_t * __this /* static, unused */, Object_t * ___obj, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsMethodOverloaded(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" bool RemotingServices_IsMethodOverloaded_m22623 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsOneWay(System.Reflection.MethodBase)
extern "C" bool RemotingServices_IsOneWay_m22624 (Object_t * __this /* static, unused */, MethodBase_t1542 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern "C" Object_t * RemotingServices_CreateClientProxy_m22625 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t5109 * ___entry, ObjectU5BU5D_t696* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern "C" Object_t * RemotingServices_CreateClientProxyForContextBound_m22626 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t696* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern "C" Identity_t5113 * RemotingServices_GetIdentityForUri_m22627 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern "C" String_t* RemotingServices_RemoveAppNameFromUri_m22628 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern "C" ClientIdentity_t5114 * RemotingServices_GetOrCreateClientIdentity_m22629 (Object_t * __this /* static, unused */, ObjRef_t5112 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientActivatedIdentity System.Runtime.Remoting.RemotingServices::CreateClientActivatedServerIdentity(System.MarshalByRefObject,System.Type,System.String)
extern "C" ClientActivatedIdentity_t5124 * RemotingServices_CreateClientActivatedServerIdentity_m22630 (Object_t * __this /* static, unused */, MarshalByRefObject_t4288 * ___realObject, Type_t * ___objectType, String_t* ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C" ServerIdentity_t4744 * RemotingServices_CreateWellKnownServerIdentity_m22631 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C" void RemotingServices_RegisterServerIdentity_m22632 (Object_t * __this /* static, unused */, ServerIdentity_t4744 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C" Object_t * RemotingServices_GetProxyForRemoteObject_m22633 (Object_t * __this /* static, unused */, ObjRef_t5112 * ___objref, Type_t * ___classToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C" Object_t * RemotingServices_GetRemoteObject_m22634 (Object_t * __this /* static, unused */, ObjRef_t5112 * ___objRef, Type_t * ___proxyType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern "C" void RemotingServices_RegisterInternalChannels_m22635 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern "C" void RemotingServices_DisposeIdentity_m22636 (Object_t * __this /* static, unused */, Identity_t5113 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C" String_t* RemotingServices_GetNormalizedUri_m22637 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
