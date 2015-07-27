﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2604;
// System.MarshalByRefObject
struct MarshalByRefObject_t2068;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2603;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m14750 (ClientIdentity_t2604 * __this, String_t* ___objectUri, ObjRef_t2603 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t2068 * ClientIdentity_get_ClientProxy_m14751 (ClientIdentity_t2604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m14752 (ClientIdentity_t2604 * __this, MarshalByRefObject_t2068 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t2603 * ClientIdentity_CreateObjRef_m14753 (ClientIdentity_t2604 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m14754 (ClientIdentity_t2604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
