#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Assembly
struct Assembly_t794;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t4844;
// System.Security.Policy.Evidence
struct Evidence_t4843;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Reflection.Module
struct Module_t5034;
// System.Reflection.AssemblyName
struct AssemblyName_t1493;
// System.Reflection.Module[]
struct ModuleU5BU5D_t5431;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.Assembly::.ctor()
extern "C" void Assembly__ctor_m21842 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_code_base(System.Boolean)
extern "C" String_t* Assembly_get_code_base_m21843 (Assembly_t794 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
extern "C" String_t* Assembly_get_fullname_m21844 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
extern "C" String_t* Assembly_get_location_m21845 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::GetCodeBase(System.Boolean)
extern "C" String_t* Assembly_GetCodeBase_m21846 (Assembly_t794 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_EscapedCodeBase()
extern "C" String_t* Assembly_get_EscapedCodeBase_m21847 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
extern "C" String_t* Assembly_get_FullName_m21848 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Reflection.Assembly::UnprotectedGetEvidence()
extern "C" Evidence_t4843 * Assembly_UnprotectedGetEvidence_m21849 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_global_assembly_cache()
extern "C" bool Assembly_get_global_assembly_cache_m21850 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_GlobalAssemblyCache()
extern "C" bool Assembly_get_GlobalAssemblyCache_m21851 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
extern "C" String_t* Assembly_get_Location_m21852 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Assembly_GetObjectData_m21853 (Assembly_t794 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern "C" bool Assembly_IsDefined_m21854 (Assembly_t794 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t707* Assembly_GetCustomAttributes_m21855 (Assembly_t794 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C" IntPtr_t Assembly_GetManifestResourceInternal_m21856 (Assembly_t794 * __this, String_t* ___name, int32_t* ___size, Module_t5034 ** ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C" Type_t * Assembly_GetType_m21857 (Assembly_t794 * __this, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C" Type_t * Assembly_GetType_m21858 (Assembly_t794 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_InternalGetType_m21859 (Assembly_t794 * __this, Module_t5034 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_GetType_m21860 (Assembly_t794 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C" void Assembly_FillName_m21861 (Object_t * __this /* static, unused */, Assembly_t794 * ___ass, AssemblyName_t1493 * ___aname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C" AssemblyName_t1493 * Assembly_UnprotectedGetName_m21862 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
extern "C" String_t* Assembly_ToString_m21863 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetEntryAssembly()
extern "C" Assembly_t794 * Assembly_GetEntryAssembly_m12124 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C" Assembly_t794 * Assembly_Load_m21864 (Object_t * __this /* static, unused */, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String)
extern "C" Assembly_t794 * Assembly_LoadWithPartialName_m21865 (Object_t * __this /* static, unused */, String_t* ___partialName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::load_with_partial_name(System.String,System.Security.Policy.Evidence)
extern "C" Assembly_t794 * Assembly_load_with_partial_name_m21866 (Object_t * __this /* static, unused */, String_t* ___name, Evidence_t4843 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence)
extern "C" Assembly_t794 * Assembly_LoadWithPartialName_m21867 (Object_t * __this /* static, unused */, String_t* ___partialName, Evidence_t4843 * ___securityEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t794 * Assembly_LoadWithPartialName_m21868 (Object_t * __this /* static, unused */, String_t* ___partialName, Evidence_t4843 * ___securityEvidence, bool ___oldBehavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C" Module_t5034 * Assembly_GetModule_m21869 (Assembly_t794 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C" ModuleU5BU5D_t5431* Assembly_GetModulesInternal_m21870 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern "C" ModuleU5BU5D_t5431* Assembly_GetModules_m21871 (Assembly_t794 * __this, bool ___getResourceModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C" Assembly_t794 * Assembly_GetExecutingAssembly_m21872 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModule()
extern "C" Module_t5034 * Assembly_GetManifestModule_m21873 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModuleInternal()
extern "C" Module_t5034 * Assembly_GetManifestModuleInternal_m21874 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::Resolve()
extern "C" void Assembly_Resolve_m21875 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_GrantedPermissionSet()
extern "C" PermissionSet_t4844 * Assembly_get_GrantedPermissionSet_m21876 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_DeniedPermissionSet()
extern "C" PermissionSet_t4844 * Assembly_get_DeniedPermissionSet_m21877 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::LoadPermissions(System.Reflection.Assembly,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&)
extern "C" bool Assembly_LoadPermissions_m21878 (Object_t * __this /* static, unused */, Assembly_t794 * ___a, IntPtr_t* ___minimum, int32_t* ___minLength, IntPtr_t* ___optional, int32_t* ___optLength, IntPtr_t* ___refused, int32_t* ___refLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::LoadAssemblyPermissions()
extern "C" void Assembly_LoadAssemblyPermissions_m21879 (Assembly_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
