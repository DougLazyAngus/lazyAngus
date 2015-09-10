#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ByRefType
struct ByRefType_t5067;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Reflection.Emit.ByRefType::.ctor(System.Type)
extern "C" void ByRefType__ctor_m22268 (ByRefType_t5067 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ByRefType::IsByRefImpl()
extern "C" bool ByRefType_IsByRefImpl_m22269 (ByRefType_t5067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ByRefType::get_BaseType()
extern "C" Type_t * ByRefType_get_BaseType_m22270 (ByRefType_t5067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ByRefType::FormatName(System.String)
extern "C" String_t* ByRefType_FormatName_m22271 (ByRefType_t5067 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ByRefType::MakeByRefType()
extern "C" Type_t * ByRefType_MakeByRefType_m22272 (ByRefType_t5067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
