#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t4578;
// System.MarshalByRefObject
struct MarshalByRefObject_t4021;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t4577;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m18064 (ClientIdentity_t4578 * __this, String_t* ___objectUri, ObjRef_t4577 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t4021 * ClientIdentity_get_ClientProxy_m18065 (ClientIdentity_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m18066 (ClientIdentity_t4578 * __this, MarshalByRefObject_t4021 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t4577 * ClientIdentity_CreateObjRef_m18067 (ClientIdentity_t4578 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m18068 (ClientIdentity_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
