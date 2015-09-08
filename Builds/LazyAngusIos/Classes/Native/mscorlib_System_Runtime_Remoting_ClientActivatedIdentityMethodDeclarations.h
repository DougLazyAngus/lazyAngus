#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientActivatedIdentity
struct ClientActivatedIdentity_t5128;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t4292;

// System.Void System.Runtime.Remoting.ClientActivatedIdentity::.ctor(System.String,System.Type)
extern "C" void ClientActivatedIdentity__ctor_m22659 (ClientActivatedIdentity_t5128 * __this, String_t* ___objectUri, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C" MarshalByRefObject_t4292 * ClientActivatedIdentity_GetServerObject_m22660 (ClientActivatedIdentity_t5128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientActivatedIdentity::OnLifetimeExpired()
extern "C" void ClientActivatedIdentity_OnLifetimeExpired_m22661 (ClientActivatedIdentity_t5128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
