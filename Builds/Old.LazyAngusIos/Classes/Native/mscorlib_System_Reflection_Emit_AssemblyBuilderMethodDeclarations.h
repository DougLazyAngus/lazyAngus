#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t2422;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t2797;
// System.Exception
struct Exception_t27;
// System.Reflection.AssemblyName
struct AssemblyName_t2445;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m13412 (AssemblyBuilder_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t2797* AssemblyBuilder_GetModulesInternal_m13413 (AssemblyBuilder_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m13414 (AssemblyBuilder_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t27 * AssemblyBuilder_not_supported_m13415 (AssemblyBuilder_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t2445 * AssemblyBuilder_UnprotectedGetName_m13416 (AssemblyBuilder_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
