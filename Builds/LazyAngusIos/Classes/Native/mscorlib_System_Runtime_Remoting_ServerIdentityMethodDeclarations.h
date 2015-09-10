#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t4755;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t5134;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t5133;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t5156;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t5123;
// System.MarshalByRefObject
struct MarshalByRefObject_t4299;

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void ServerIdentity__ctor_m22708 (ServerIdentity_t4755 * __this, String_t* ___objectUri, Context_t5133 * ___context, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m22709 (ServerIdentity_t4755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::StartTrackingLifetime(System.Runtime.Remoting.Lifetime.ILease)
extern "C" void ServerIdentity_StartTrackingLifetime_m22710 (ServerIdentity_t4755 * __this, Object_t * ___lease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::OnLifetimeExpired()
extern "C" void ServerIdentity_OnLifetimeExpired_m22711 (ServerIdentity_t4755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t5123 * ServerIdentity_CreateObjRef_m22712 (ServerIdentity_t4755 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::AttachServerObject(System.MarshalByRefObject,System.Runtime.Remoting.Contexts.Context)
extern "C" void ServerIdentity_AttachServerObject_m22713 (ServerIdentity_t4755 * __this, MarshalByRefObject_t4299 * ___serverObject, Context_t5133 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::get_Lease()
extern "C" Lease_t5134 * ServerIdentity_get_Lease_m22714 (ServerIdentity_t4755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::DisposeServerObject()
extern "C" void ServerIdentity_DisposeServerObject_m22715 (ServerIdentity_t4755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
