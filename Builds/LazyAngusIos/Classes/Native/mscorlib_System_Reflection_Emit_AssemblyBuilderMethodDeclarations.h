#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t5049;
// System.String
struct String_t;
// System.Reflection.AssemblyName
struct AssemblyName_t1482;
// System.Security.PermissionSet
struct PermissionSet_t4833;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t5048;
// System.Reflection.Module[]
struct ModuleU5BU5D_t5420;
// System.Reflection.Module
struct Module_t5023;
// System.Exception
struct Exception_t57;
// System.Reflection.Emit.AssemblyBuilderAccess
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"

// System.Void System.Reflection.Emit.AssemblyBuilder::.ctor(System.Reflection.AssemblyName,System.String,System.Reflection.Emit.AssemblyBuilderAccess,System.Boolean)
extern "C" void AssemblyBuilder__ctor_m22119 (AssemblyBuilder_t5049 * __this, AssemblyName_t1482 * ___n, String_t* ___directory, int32_t ___access, bool ___corlib_internal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)
extern "C" void AssemblyBuilder_basic_init_m22120 (Object_t * __this /* static, unused */, AssemblyBuilder_t5049 * ___ab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m22121 (AssemblyBuilder_t5049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::AddPermissionRequests(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C" void AssemblyBuilder_AddPermissionRequests_m22122 (AssemblyBuilder_t5049 * __this, PermissionSet_t4833 * ___required, PermissionSet_t4833 * ___optional, PermissionSet_t4833 * ___refused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String)
extern "C" ModuleBuilder_t5048 * AssemblyBuilder_DefineDynamicModule_m22123 (AssemblyBuilder_t5049 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.Boolean)
extern "C" ModuleBuilder_t5048 * AssemblyBuilder_DefineDynamicModule_m22124 (AssemblyBuilder_t5049 * __this, String_t* ___name, bool ___emitSymbolInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.String,System.Boolean,System.Boolean)
extern "C" ModuleBuilder_t5048 * AssemblyBuilder_DefineDynamicModule_m22125 (AssemblyBuilder_t5049 * __this, String_t* ___name, String_t* ___fileName, bool ___emitSymbolInfo, bool ___transient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t5420* AssemblyBuilder_GetModulesInternal_m22126 (AssemblyBuilder_t5049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m22127 (AssemblyBuilder_t5049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsSave()
extern "C" bool AssemblyBuilder_get_IsSave_m22128 (AssemblyBuilder_t5049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsRun()
extern "C" bool AssemblyBuilder_get_IsRun_m22129 (AssemblyBuilder_t5049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_AssemblyDir()
extern "C" String_t* AssemblyBuilder_get_AssemblyDir_m22130 (AssemblyBuilder_t5049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.AssemblyBuilder::GetManifestModule()
extern "C" Module_t5023 * AssemblyBuilder_GetManifestModule_m22131 (AssemblyBuilder_t5049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t57 * AssemblyBuilder_not_supported_m22132 (AssemblyBuilder_t5049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::check_name_and_filename(System.String,System.String,System.Boolean)
extern "C" void AssemblyBuilder_check_name_and_filename_m22133 (AssemblyBuilder_t5049 * __this, String_t* ___name, String_t* ___fileName, bool ___fileNeedsToExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1482 * AssemblyBuilder_UnprotectedGetName_m22134 (AssemblyBuilder_t5049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
