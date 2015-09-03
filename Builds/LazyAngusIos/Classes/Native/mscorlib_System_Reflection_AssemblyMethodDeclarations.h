#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Assembly
struct Assembly_t783;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t4833;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Reflection.Module
struct Module_t5023;
// System.Reflection.AssemblyName
struct AssemblyName_t1482;
// System.Reflection.Module[]
struct ModuleU5BU5D_t5420;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.Assembly::.ctor()
extern "C" void Assembly__ctor_m21772 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_code_base(System.Boolean)
extern "C" String_t* Assembly_get_code_base_m21773 (Assembly_t783 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
extern "C" String_t* Assembly_get_fullname_m21774 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
extern "C" String_t* Assembly_get_location_m21775 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::GetCodeBase(System.Boolean)
extern "C" String_t* Assembly_GetCodeBase_m21776 (Assembly_t783 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_EscapedCodeBase()
extern "C" String_t* Assembly_get_EscapedCodeBase_m21777 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
extern "C" String_t* Assembly_get_FullName_m21778 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Reflection.Assembly::UnprotectedGetEvidence()
extern "C" Evidence_t4832 * Assembly_UnprotectedGetEvidence_m21779 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_global_assembly_cache()
extern "C" bool Assembly_get_global_assembly_cache_m21780 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_GlobalAssemblyCache()
extern "C" bool Assembly_get_GlobalAssemblyCache_m21781 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
extern "C" String_t* Assembly_get_Location_m21782 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Assembly_GetObjectData_m21783 (Assembly_t783 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern "C" bool Assembly_IsDefined_m21784 (Assembly_t783 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t696* Assembly_GetCustomAttributes_m21785 (Assembly_t783 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C" IntPtr_t Assembly_GetManifestResourceInternal_m21786 (Assembly_t783 * __this, String_t* ___name, int32_t* ___size, Module_t5023 ** ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C" Type_t * Assembly_GetType_m21787 (Assembly_t783 * __this, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C" Type_t * Assembly_GetType_m21788 (Assembly_t783 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_InternalGetType_m21789 (Assembly_t783 * __this, Module_t5023 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_GetType_m21790 (Assembly_t783 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C" void Assembly_FillName_m21791 (Object_t * __this /* static, unused */, Assembly_t783 * ___ass, AssemblyName_t1482 * ___aname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C" AssemblyName_t1482 * Assembly_UnprotectedGetName_m21792 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
extern "C" String_t* Assembly_ToString_m21793 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetEntryAssembly()
extern "C" Assembly_t783 * Assembly_GetEntryAssembly_m12054 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C" Assembly_t783 * Assembly_Load_m21794 (Object_t * __this /* static, unused */, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String)
extern "C" Assembly_t783 * Assembly_LoadWithPartialName_m21795 (Object_t * __this /* static, unused */, String_t* ___partialName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::load_with_partial_name(System.String,System.Security.Policy.Evidence)
extern "C" Assembly_t783 * Assembly_load_with_partial_name_m21796 (Object_t * __this /* static, unused */, String_t* ___name, Evidence_t4832 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence)
extern "C" Assembly_t783 * Assembly_LoadWithPartialName_m21797 (Object_t * __this /* static, unused */, String_t* ___partialName, Evidence_t4832 * ___securityEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t783 * Assembly_LoadWithPartialName_m21798 (Object_t * __this /* static, unused */, String_t* ___partialName, Evidence_t4832 * ___securityEvidence, bool ___oldBehavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C" Module_t5023 * Assembly_GetModule_m21799 (Assembly_t783 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C" ModuleU5BU5D_t5420* Assembly_GetModulesInternal_m21800 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern "C" ModuleU5BU5D_t5420* Assembly_GetModules_m21801 (Assembly_t783 * __this, bool ___getResourceModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C" Assembly_t783 * Assembly_GetExecutingAssembly_m21802 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModule()
extern "C" Module_t5023 * Assembly_GetManifestModule_m21803 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModuleInternal()
extern "C" Module_t5023 * Assembly_GetManifestModuleInternal_m21804 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::Resolve()
extern "C" void Assembly_Resolve_m21805 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_GrantedPermissionSet()
extern "C" PermissionSet_t4833 * Assembly_get_GrantedPermissionSet_m21806 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_DeniedPermissionSet()
extern "C" PermissionSet_t4833 * Assembly_get_DeniedPermissionSet_m21807 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::LoadPermissions(System.Reflection.Assembly,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&)
extern "C" bool Assembly_LoadPermissions_m21808 (Object_t * __this /* static, unused */, Assembly_t783 * ___a, IntPtr_t* ___minimum, int32_t* ___minLength, IntPtr_t* ___optional, int32_t* ___optLength, IntPtr_t* ___refused, int32_t* ___refLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::LoadAssemblyPermissions()
extern "C" void Assembly_LoadAssemblyPermissions_m21809 (Assembly_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
