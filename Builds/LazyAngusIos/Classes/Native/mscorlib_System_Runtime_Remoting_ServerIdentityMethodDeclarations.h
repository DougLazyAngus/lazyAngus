#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t4745;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t5124;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t5123;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t5146;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t5113;
// System.MarshalByRefObject
struct MarshalByRefObject_t4289;

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void ServerIdentity__ctor_m22651 (ServerIdentity_t4745 * __this, String_t* ___objectUri, Context_t5123 * ___context, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m22652 (ServerIdentity_t4745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::StartTrackingLifetime(System.Runtime.Remoting.Lifetime.ILease)
extern "C" void ServerIdentity_StartTrackingLifetime_m22653 (ServerIdentity_t4745 * __this, Object_t * ___lease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::OnLifetimeExpired()
extern "C" void ServerIdentity_OnLifetimeExpired_m22654 (ServerIdentity_t4745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t5113 * ServerIdentity_CreateObjRef_m22655 (ServerIdentity_t4745 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::AttachServerObject(System.MarshalByRefObject,System.Runtime.Remoting.Contexts.Context)
extern "C" void ServerIdentity_AttachServerObject_m22656 (ServerIdentity_t4745 * __this, MarshalByRefObject_t4289 * ___serverObject, Context_t5123 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::get_Lease()
extern "C" Lease_t5124 * ServerIdentity_get_Lease_m22657 (ServerIdentity_t4745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::DisposeServerObject()
extern "C" void ServerIdentity_DisposeServerObject_m22658 (ServerIdentity_t4745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
