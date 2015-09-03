#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MarshalByRefObject
struct MarshalByRefObject_t4288;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t4744;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t5112;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

// System.Void System.MarshalByRefObject::.ctor()
extern "C" void MarshalByRefObject__ctor_m18076 (MarshalByRefObject_t4288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::get_ObjectIdentity()
extern "C" ServerIdentity_t4744 * MarshalByRefObject_get_ObjectIdentity_m19282 (MarshalByRefObject_t4288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MarshalByRefObject::set_ObjectIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C" void MarshalByRefObject_set_ObjectIdentity_m19283 (MarshalByRefObject_t4288 * __this, ServerIdentity_t4744 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.MarshalByRefObject::CreateObjRef(System.Type)
extern "C" ObjRef_t5112 * MarshalByRefObject_CreateObjRef_m11636 (MarshalByRefObject_t4288 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MarshalByRefObject::InitializeLifetimeService()
extern "C" Object_t * MarshalByRefObject_InitializeLifetimeService_m11637 (MarshalByRefObject_t4288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
