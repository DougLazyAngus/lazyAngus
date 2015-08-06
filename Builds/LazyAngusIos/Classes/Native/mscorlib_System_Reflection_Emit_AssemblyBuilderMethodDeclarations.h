#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t4461;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t4830;
// System.Exception
struct Exception_t57;
// System.Reflection.AssemblyName
struct AssemblyName_t1414;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m17376 (AssemblyBuilder_t4461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t4830* AssemblyBuilder_GetModulesInternal_m17377 (AssemblyBuilder_t4461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m17378 (AssemblyBuilder_t4461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t57 * AssemblyBuilder_not_supported_m17379 (AssemblyBuilder_t4461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1414 * AssemblyBuilder_UnprotectedGetName_m17380 (AssemblyBuilder_t4461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
