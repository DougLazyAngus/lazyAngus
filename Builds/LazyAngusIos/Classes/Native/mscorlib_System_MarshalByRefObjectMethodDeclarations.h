#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MarshalByRefObject
struct MarshalByRefObject_t4299;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t4755;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t5123;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

// System.Void System.MarshalByRefObject::.ctor()
extern "C" void MarshalByRefObject__ctor_m18146 (MarshalByRefObject_t4299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::get_ObjectIdentity()
extern "C" ServerIdentity_t4755 * MarshalByRefObject_get_ObjectIdentity_m19352 (MarshalByRefObject_t4299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MarshalByRefObject::set_ObjectIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C" void MarshalByRefObject_set_ObjectIdentity_m19353 (MarshalByRefObject_t4299 * __this, ServerIdentity_t4755 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.MarshalByRefObject::CreateObjRef(System.Type)
extern "C" ObjRef_t5123 * MarshalByRefObject_CreateObjRef_m11706 (MarshalByRefObject_t4299 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MarshalByRefObject::InitializeLifetimeService()
extern "C" Object_t * MarshalByRefObject_InitializeLifetimeService_m11707 (MarshalByRefObject_t4299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
