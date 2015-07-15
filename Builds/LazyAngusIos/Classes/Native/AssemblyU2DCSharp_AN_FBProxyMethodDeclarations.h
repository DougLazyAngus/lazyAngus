#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_FBProxy
struct AN_FBProxy_t96;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t533;

// System.Void AN_FBProxy::.ctor()
extern "C" void AN_FBProxy__ctor_m436 (AN_FBProxy_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_FBProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_FBProxy_CallActivityFunction_m437 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t533* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_FBProxy::SendTrunRequest(System.String,System.String,System.String,System.String)
extern "C" void AN_FBProxy_SendTrunRequest_m438 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___messgae, String_t* ___data, String_t* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
