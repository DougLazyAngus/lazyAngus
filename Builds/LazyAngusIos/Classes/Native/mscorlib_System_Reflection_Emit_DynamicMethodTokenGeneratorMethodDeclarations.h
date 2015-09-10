#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.DynamicMethodTokenGenerator
struct DynamicMethodTokenGenerator_t5069;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t4564;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t1231;
// System.Reflection.MemberInfo
struct MemberInfo_t;

// System.Void System.Reflection.Emit.DynamicMethodTokenGenerator::.ctor(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethodTokenGenerator__ctor_m22298 (DynamicMethodTokenGenerator_t5069 * __this, DynamicMethod_t4564 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.String)
extern "C" int32_t DynamicMethodTokenGenerator_GetToken_m22299 (DynamicMethodTokenGenerator_t5069 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C" int32_t DynamicMethodTokenGenerator_GetToken_m22300 (DynamicMethodTokenGenerator_t5069 * __this, MethodInfo_t * ___method, TypeU5BU5D_t1231* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C" int32_t DynamicMethodTokenGenerator_GetToken_m22301 (DynamicMethodTokenGenerator_t5069 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
