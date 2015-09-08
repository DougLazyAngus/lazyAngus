#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t5078;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t5052;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t1224;

// System.Void System.Reflection.Emit.ModuleBuilderTokenGenerator::.ctor(System.Reflection.Emit.ModuleBuilder)
extern "C" void ModuleBuilderTokenGenerator__ctor_m22437 (ModuleBuilderTokenGenerator_t5078 * __this, ModuleBuilder_t5052 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.String)
extern "C" int32_t ModuleBuilderTokenGenerator_GetToken_m22438 (ModuleBuilderTokenGenerator_t5078 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C" int32_t ModuleBuilderTokenGenerator_GetToken_m22439 (ModuleBuilderTokenGenerator_t5078 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C" int32_t ModuleBuilderTokenGenerator_GetToken_m22440 (ModuleBuilderTokenGenerator_t5078 * __this, MethodInfo_t * ___method, TypeU5BU5D_t1224* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
