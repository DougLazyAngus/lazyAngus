#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t4508;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t4877;
// System.Exception
struct Exception_t57;
// System.Reflection.AssemblyName
struct AssemblyName_t1466;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m17654 (AssemblyBuilder_t4508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t4877* AssemblyBuilder_GetModulesInternal_m17655 (AssemblyBuilder_t4508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m17656 (AssemblyBuilder_t4508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t57 * AssemblyBuilder_not_supported_m17657 (AssemblyBuilder_t4508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1466 * AssemblyBuilder_UnprotectedGetName_m17658 (AssemblyBuilder_t4508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
