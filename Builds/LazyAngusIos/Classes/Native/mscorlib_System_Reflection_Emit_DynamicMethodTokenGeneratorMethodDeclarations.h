#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.DynamicMethodTokenGenerator
struct DynamicMethodTokenGenerator_t5062;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t4557;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t1224;
// System.Reflection.MemberInfo
struct MemberInfo_t;

// System.Void System.Reflection.Emit.DynamicMethodTokenGenerator::.ctor(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethodTokenGenerator__ctor_m22241 (DynamicMethodTokenGenerator_t5062 * __this, DynamicMethod_t4557 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.String)
extern "C" int32_t DynamicMethodTokenGenerator_GetToken_m22242 (DynamicMethodTokenGenerator_t5062 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C" int32_t DynamicMethodTokenGenerator_GetToken_m22243 (DynamicMethodTokenGenerator_t5062 * __this, MethodInfo_t * ___method, TypeU5BU5D_t1224* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C" int32_t DynamicMethodTokenGenerator_GetToken_m22244 (DynamicMethodTokenGenerator_t5062 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
