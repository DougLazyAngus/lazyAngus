#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t5054;
struct RefEmitPermissionSet_t5054_marshaled;
// System.String
struct String_t;
// System.Security.Permissions.SecurityAction
#include "mscorlib_System_Security_Permissions_SecurityAction.h"

// System.Void System.Reflection.Emit.RefEmitPermissionSet::.ctor(System.Security.Permissions.SecurityAction,System.String)
extern "C" void RefEmitPermissionSet__ctor_m22188 (RefEmitPermissionSet_t5054 * __this, int32_t ___action, String_t* ___pset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void RefEmitPermissionSet_t5054_marshal(const RefEmitPermissionSet_t5054& unmarshaled, RefEmitPermissionSet_t5054_marshaled& marshaled);
void RefEmitPermissionSet_t5054_marshal_back(const RefEmitPermissionSet_t5054_marshaled& marshaled, RefEmitPermissionSet_t5054& unmarshaled);
void RefEmitPermissionSet_t5054_marshal_cleanup(RefEmitPermissionSet_t5054_marshaled& marshaled);
