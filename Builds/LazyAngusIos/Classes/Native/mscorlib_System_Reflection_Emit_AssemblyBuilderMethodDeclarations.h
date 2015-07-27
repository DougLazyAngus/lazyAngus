#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t2476;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t2851;
// System.Exception
struct Exception_t27;
// System.Reflection.AssemblyName
struct AssemblyName_t2499;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m14002 (AssemblyBuilder_t2476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t2851* AssemblyBuilder_GetModulesInternal_m14003 (AssemblyBuilder_t2476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m14004 (AssemblyBuilder_t2476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t27 * AssemblyBuilder_not_supported_m14005 (AssemblyBuilder_t2476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t2499 * AssemblyBuilder_UnprotectedGetName_m14006 (AssemblyBuilder_t2476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
