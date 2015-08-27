#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t4634;
// System.MarshalByRefObject
struct MarshalByRefObject_t4077;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t4633;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m18405 (ClientIdentity_t4634 * __this, String_t* ___objectUri, ObjRef_t4633 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t4077 * ClientIdentity_get_ClientProxy_m18406 (ClientIdentity_t4634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m18407 (ClientIdentity_t4634 * __this, MarshalByRefObject_t4077 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t4633 * ClientIdentity_CreateObjRef_m18408 (ClientIdentity_t4634 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m18409 (ClientIdentity_t4634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
