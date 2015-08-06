#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t748_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3284);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t78 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t78 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m457(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m458(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t748 * tmp;
		tmp = (ExtensionAttribute_t748 *)il2cpp_codegen_object_new (ExtensionAttribute_t748_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4080(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2111 * tmp;
		tmp = (InternalsVisibleToAttribute_t2111 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2111_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7585(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2630_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2630_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var;
void AssetBundle_t2632_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2846 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2846 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9814(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var;
void AssetBundle_t2632_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2846 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2846 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9814(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AssetBundle_t2632_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void LayerMask_t837_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void LayerMask_t837_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void LayerMask_t837_CustomAttributesCacheGenerator_LayerMask_t837_LayerMask_GetMask_m8436_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void RuntimePlatform_t2636_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void RuntimePlatform_t2636_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void RuntimePlatform_t2636_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void RuntimePlatform_t2636_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void RuntimePlatform_t2636_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void SystemInfo_t2637_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void SystemInfo_t2637_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void SystemInfo_t2637_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Coroutine_t892_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2792_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8442_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2792 * tmp;
		tmp = (WritableAttribute_t2792 *)il2cpp_codegen_object_new (WritableAttribute_t2792_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9609(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GcLeaderboard_t2649_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8512(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GcLeaderboard_t2649_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GcLeaderboard_t2649_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GcLeaderboard_t2649_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8515(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void MeshFilter_t739_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8516(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2792_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_t481_Mesh_Internal_Create_m8516_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2792 * tmp;
		tmp = (WritableAttribute_t2792 *)il2cpp_codegen_object_new (WritableAttribute_t2792_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9609(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_vertices_m3932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_triangles_m3933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Renderer_t563_CustomAttributesCacheGenerator_Renderer_set_enabled_m3783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Renderer_t563_CustomAttributesCacheGenerator_Renderer_get_material_m3762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Renderer_t563_CustomAttributesCacheGenerator_Renderer_set_material_m3764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Renderer_t563_CustomAttributesCacheGenerator_Renderer_set_materials_m4029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Renderer_t563_CustomAttributesCacheGenerator_Renderer_get_bounds_m3792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Renderer_t563_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Renderer_t563_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Screen_t2651_CustomAttributesCacheGenerator_Screen_get_width_m3422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Screen_t2651_CustomAttributesCacheGenerator_Screen_get_height_m3437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Screen_t2651_CustomAttributesCacheGenerator_Screen_get_dpi_m3544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Screen_t2651_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Screen_t2651_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Screen_t2651_CustomAttributesCacheGenerator_Screen_get_orientation_m3436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2792_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8543_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2792 * tmp;
		tmp = (WritableAttribute_t2792 *)il2cpp_codegen_object_new (WritableAttribute_t2792_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9609(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8544_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8544_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RenderTexture_t2652_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RenderTexture_t2652_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUILayer_t2655_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Gradient_t2658_CustomAttributesCacheGenerator_Gradient_Init_m8555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Gradient_t2658_CustomAttributesCacheGenerator_Gradient_Cleanup_m8556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_set_changed_m8568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_get_enabled_m8569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_set_enabled_m3455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_Label_m3433_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_Box_m3449_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_Button_m3431_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_TextField_m3434_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_TextField_m3870_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_Toggle_m3479_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_SelectionGrid_m3477_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_SelectionGrid_m8607_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginHorizontal_m3432_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginHorizontal_m8608_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginVertical_m3446_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginVertical_m8609_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginScrollView_m3454_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginScrollView_m8610_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var;
void GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2913 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2913 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9945(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_t653_GUILayoutUtility_GetRect_m8631_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_t653_GUILayoutUtility_GetRect_m8633_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIClip_t2674_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIClip_t2674_CustomAttributesCacheGenerator_GUIClip_Pop_m8701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISettings_t2675_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISettings_t2675_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISettings_t2675_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISettings_t2675_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISettings_t2675_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t1056_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t1056 * tmp;
		tmp = (ExecuteInEditMode_t1056 *)il2cpp_codegen_object_new (ExecuteInEditMode_t1056_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m6001(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUIContent_t732_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUIContent_t732_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void GUIContent_t732_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_Init_m8770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_Init_m8776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_left_m5909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_left_m8778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_right_m8779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_right_m8780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_top_m5910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_top_m8781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8812_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Init_m8833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Cleanup_m8835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_rawType_m5769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_type_m3878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_modifiers_m5765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_character_m5767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_commandName_m8841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_keyCode_m5766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Use_m8844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_PopEvent_m5770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1046_il2cpp_TypeInfo_var;
void EventModifiers_t2684_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1046_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1046 * tmp;
		tmp = (FlagsAttribute_t1046 *)il2cpp_codegen_object_new (FlagsAttribute_t1046_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5946(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector2_t110_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector3_t496_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Color_t325_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2786_il2cpp_TypeInfo_var;
void Color32_t705_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2786 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2786 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2786_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m9601(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t734_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Matrix4x4_t1024_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t984_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Mathf_t677_CustomAttributesCacheGenerator_Mathf_t677_Mathf_SmoothDamp_m5828_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Mathf_t677_CustomAttributesCacheGenerator_Mathf_t677_Mathf_SmoothDamp_m5828_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1046_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2686_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1046_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1046 * tmp;
		tmp = (FlagsAttribute_t1046 *)il2cpp_codegen_object_new (FlagsAttribute_t1046_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5946(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var;
void Resources_t737_CustomAttributesCacheGenerator_Resources_Load_m8988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2846 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2846 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9814(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextAsset_t729_CustomAttributesCacheGenerator_TextAsset_get_text_m3861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2690_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Shader_t2691_CustomAttributesCacheGenerator_Shader_PropertyToID_m8991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m8994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_SetTexture_m8996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_GetTexture_m8998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_SetFloat_m9000(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_HasProperty_m9001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2792_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_t482_Material_Internal_CreateWithMaterial_m9002_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2792 * tmp;
		tmp = (WritableAttribute_t2792 *)il2cpp_codegen_object_new (WritableAttribute_t2792_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9609(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2692_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2692_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2692_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2692_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_rect_m5696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_texture_m5689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_border_m5690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void SpriteRenderer_t611_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void SpriteRenderer_t611_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void DataUtility_t2693_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void DataUtility_t2693_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void DataUtility_t2693_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void DataUtility_t2693_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9028_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9036_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9038_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9038_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void WWWTranscoder_t2695_CustomAttributesCacheGenerator_WWWTranscoder_t2695_WWWTranscoder_URLEncode_m9042_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void WWWTranscoder_t2695_CustomAttributesCacheGenerator_WWWTranscoder_t2695_WWWTranscoder_QPEncode_m9044_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void WWWTranscoder_t2695_CustomAttributesCacheGenerator_WWWTranscoder_t2695_WWWTranscoder_SevenBitClean_m9047_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void CacheIndex_t2696_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void UnityString_t2697_CustomAttributesCacheGenerator_UnityString_t2697_UnityString_Format_m9049_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AsyncOperation_t2631_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3516(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_get_isPlaying_m5808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_get_isEditor_m5810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_get_platform_m3530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_t1461_Application_ExternalCall_m3828_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_t1461_Application_BuildInvocationForArguments_m9060_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_OpenURL_m3721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2914_il2cpp_TypeInfo_var;
void Application_t1461_CustomAttributesCacheGenerator_Application_t1461____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2914 * tmp;
		tmp = (SecurityCriticalAttribute_t2914 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2914_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m9949(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Behaviour_t1034_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Behaviour_t1034_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Behaviour_t1034_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5540(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_depth_m5504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_eventMask_m9070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_main_m3768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var;
void CameraCallback_t2698_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2144 * tmp;
		tmp = (EditorBrowsableAttribute_t2144 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7882(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Debug_t2699_CustomAttributesCacheGenerator_Debug_Internal_Log_m9090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2792_il2cpp_TypeInfo_var;
void Debug_t2699_CustomAttributesCacheGenerator_Debug_t2699_Debug_Internal_Log_m9090_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2792 * tmp;
		tmp = (WritableAttribute_t2792 *)il2cpp_codegen_object_new (WritableAttribute_t2792_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9609(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Debug_t2699_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2792_il2cpp_TypeInfo_var;
void Debug_t2699_CustomAttributesCacheGenerator_Debug_t2699_Debug_Internal_LogException_m9091_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2792 * tmp;
		tmp = (WritableAttribute_t2792 *)il2cpp_codegen_object_new (WritableAttribute_t2792_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9609(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Debug_t2699_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Display_t2702_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Display_t2702_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Display_t2702_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Display_t2702_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Display_t2702_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Display_t2702_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Display_t2702_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Display_t2702_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetAxis_m4067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetButtonDown_m5582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButton_m3974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_get_mousePosition_m3769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_get_mousePresent_m5581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetTouch_m3451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_get_touchCount_m3450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_get_compositionString_m5747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1046_il2cpp_TypeInfo_var;
void HideFlags_t2705_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1046_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1046 * tmp;
		tmp = (FlagsAttribute_t1046 *)il2cpp_codegen_object_new (FlagsAttribute_t1046_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5946(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_Destroy_m9133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_t652_Object_Destroy_m9133_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_Destroy_m3661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_t652_Object_DestroyImmediate_m9134_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2846 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2846 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9814(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_get_name_m3518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_set_name_m5870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_set_hideFlags_m5781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_ToString_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_Instantiate_m3902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2846 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2846 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9814(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2846 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2846 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9814(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_get_transform_m3797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_get_gameObject_m3517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_GetComponent_m5916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2846 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2846 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9814(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_GetComponent_m9952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2913 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2913 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9945(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2846 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2846 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9814(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2913 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2913 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9945(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2846 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2846 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9814(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9150_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9150_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2846 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2846 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2846_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9814(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2792_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9153_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2792 * tmp;
		tmp = (WritableAttribute_t2792 *)il2cpp_codegen_object_new (WritableAttribute_t2792_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9609(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9171_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Time_t2707_CustomAttributesCacheGenerator_Time_get_time_m3923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Time_t2707_CustomAttributesCacheGenerator_Time_get_deltaTime_m3945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Time_t2707_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Time_t2707_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Time_t2707_CustomAttributesCacheGenerator_Time_set_timeScale_m3722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Random_t2708_CustomAttributesCacheGenerator_Random_set_seed_m3997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Random_t2708_CustomAttributesCacheGenerator_Random_Range_m3943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Random_t2708_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_t2710_PlayerPrefs_GetString_m7473_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void LocalNotification_t2711_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RemoteNotification_t2712_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9202(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Physics_t2716_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_Raycast_m9222_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_Raycast_m9222_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void Physics_t2716_CustomAttributesCacheGenerator_Physics_Raycast_m3772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_Raycast_m5669_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_Raycast_m5669_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_RaycastAll_m5607_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_RaycastAll_m5607_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_RaycastAll_m9223_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_RaycastAll_m9223_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Physics_t2716_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Collider_t714_CustomAttributesCacheGenerator_Collider_set_enabled_m3784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Collider_t714_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_t743_Physics2D_IgnoreLayerCollision_m3975_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_Raycast_m5670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_t743_Physics2D_Raycast_m9230_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_t743_Physics2D_Raycast_m9230_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_t743_Physics2D_Raycast_m9230_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_t743_Physics2D_Raycast_m9230_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Collider2D_t577_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Collider2D_t577_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_set_clip_m3760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Play_m9250(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_t569_AudioSource_Play_m9250_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Play_m4031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Stop_m3761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2843_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_t569_AudioSource_PlayOneShot_m9251_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2843 * tmp;
		tmp = (DefaultValueAttribute_t2843 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2843_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9809(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2844 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2844 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2844_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9813(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void AnimationEvent_t2727_CustomAttributesCacheGenerator_AnimationEvent_t2727____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void AnimationCurve_t2731_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void AnimationCurve_t2731_CustomAttributesCacheGenerator_AnimationCurve_t2731_AnimationCurve__ctor_m9277_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AnimationCurve_t2731_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void AnimationCurve_t2731_CustomAttributesCacheGenerator_AnimationCurve_Init_m9281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2728_CustomAttributesCacheGenerator_AnimatorStateInfo_t2728____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Animator_t619_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Animator_t619_CustomAttributesCacheGenerator_Animator_StringToHash_m9300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Animator_t619_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Animator_t619_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Animator_t619_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void CharacterInfo_t2737_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void CharacterInfo_t2737_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void CharacterInfo_t2737_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t752_il2cpp_TypeInfo_var;
void CharacterInfo_t2737_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t752 * tmp;
		tmp = (ObsoleteAttribute_t752 *)il2cpp_codegen_object_new (ObsoleteAttribute_t752_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4187(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Font_t852_CustomAttributesCacheGenerator_Font_get_material_m5874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Font_t852_CustomAttributesCacheGenerator_Font_HasCharacter_m5768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Font_t852_CustomAttributesCacheGenerator_Font_get_dynamic_m5876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Font_t852_CustomAttributesCacheGenerator_Font_get_fontSize_m5877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2738_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2144 * tmp;
		tmp = (EditorBrowsableAttribute_t2144 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7882(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_Init_m9331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9335(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9342(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void Canvas_t627_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void CanvasGroup_t1006_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void CanvasGroup_t1006_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void CanvasGroup_t1006_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransformUtility_t1008_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransformUtility_t1008_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2785_il2cpp_TypeInfo_var;
void RectTransformUtility_t1008_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2785 * tmp;
		tmp = (WrapperlessIcall_t2785 *)il2cpp_codegen_object_new (WrapperlessIcall_t2785_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9600(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2742_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2742_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2742_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2742_CustomAttributesCacheGenerator_Request_get_sourceId_m9370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2742_CustomAttributesCacheGenerator_Request_get_appId_m9371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2742_CustomAttributesCacheGenerator_Request_get_domain_m9372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2744_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2744_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2744_CustomAttributesCacheGenerator_Response_get_success_m9381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2744_CustomAttributesCacheGenerator_Response_set_success_m9382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2744_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2744_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2749_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2749_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2749_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2749_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2749_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2749_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2751_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2751_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2751_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2752_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2752_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2752_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2752_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2752_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2752_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_name_m9467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_name_m9468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2758_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2758_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2758_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t2916_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2759_il2cpp_TypeInfo_var;
void AppID_t2759_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		AppID_t2759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4369);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2916 * tmp;
		tmp = (DefaultValueAttribute_t2916 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2916_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9967(tmp, Box(AppID_t2759_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2916_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2760_il2cpp_TypeInfo_var;
void SourceID_t2760_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		SourceID_t2760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4368);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2916 * tmp;
		tmp = (DefaultValueAttribute_t2916 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2916_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9967(tmp, Box(SourceID_t2760_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2916_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2761_il2cpp_TypeInfo_var;
void NetworkID_t2761_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		NetworkID_t2761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4371);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2916 * tmp;
		tmp = (DefaultValueAttribute_t2916 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2916_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9967(tmp, Box(NetworkID_t2761_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2916_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2762_il2cpp_TypeInfo_var;
void NodeID_t2762_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		NodeID_t2762_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4372);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2916 * tmp;
		tmp = (DefaultValueAttribute_t2916 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2916_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9967(tmp, Box(NodeID_t2762_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2767_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t84 * tmp;
		tmp = (DebuggerHiddenAttribute_t84 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m488(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2918_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2918_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t84 * tmp;
		tmp = (DebuggerHiddenAttribute_t84 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m488(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2918_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t84 * tmp;
		tmp = (DebuggerHiddenAttribute_t84 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m488(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2918_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t84 * tmp;
		tmp = (DebuggerHiddenAttribute_t84 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m488(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2918_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t84 * tmp;
		tmp = (DebuggerHiddenAttribute_t84 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m488(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var;
void JsonArray_t2768_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2919 * tmp;
		tmp = (GeneratedCodeAttribute_t2919 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9979(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2144 * tmp;
		tmp = (EditorBrowsableAttribute_t2144 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7882(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var;
void JsonObject_t2769_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3288);
		GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2144 * tmp;
		tmp = (EditorBrowsableAttribute_t2144 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7882(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t2919 * tmp;
		tmp = (GeneratedCodeAttribute_t2919 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9979(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var;
void SimpleJson_t2772_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2919 * tmp;
		tmp = (GeneratedCodeAttribute_t2919 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9979(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var;
void SimpleJson_t2772_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2920 * tmp;
		tmp = (SuppressMessageAttribute_t2920 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9980(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9981(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var;
void SimpleJson_t2772_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2920 * tmp;
		tmp = (SuppressMessageAttribute_t2920 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9980(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var;
void SimpleJson_t2772_CustomAttributesCacheGenerator_SimpleJson_t2772____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2144 * tmp;
		tmp = (EditorBrowsableAttribute_t2144 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2144_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7882(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2770_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2919 * tmp;
		tmp = (GeneratedCodeAttribute_t2919 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9979(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2770_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2920 * tmp;
		tmp = (SuppressMessageAttribute_t2920 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9980(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9981(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2771_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2919 * tmp;
		tmp = (GeneratedCodeAttribute_t2919 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9979(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2771_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2920 * tmp;
		tmp = (SuppressMessageAttribute_t2920 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9980(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9981(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2771_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2920 * tmp;
		tmp = (SuppressMessageAttribute_t2920 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2920_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9980(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9981(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var;
void ReflectionUtils_t2784_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2919 * tmp;
		tmp = (GeneratedCodeAttribute_t2919 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2919_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9979(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void ReflectionUtils_t2784_CustomAttributesCacheGenerator_ReflectionUtils_t2784_ReflectionUtils_GetConstructorInfo_m9584_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void ReflectionUtils_t2784_CustomAttributesCacheGenerator_ReflectionUtils_t2784_ReflectionUtils_GetContructor_m9589_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void ReflectionUtils_t2784_CustomAttributesCacheGenerator_ReflectionUtils_t2784_ReflectionUtils_GetConstructorByReflection_m9591_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2921_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2778_CustomAttributesCacheGenerator_ConstructorDelegate_t2778_ConstructorDelegate_Invoke_m9569_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t749_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2778_CustomAttributesCacheGenerator_ConstructorDelegate_t2778_ConstructorDelegate_BeginInvoke_m9570_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t749 * tmp;
		tmp = (ParamArrayAttribute_t749 *)il2cpp_codegen_object_new (ParamArrayAttribute_t749_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4099(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2779_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2780_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2781_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2782_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2783_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2786_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1057_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7744(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void RequireComponent_t1051_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7745(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void WritableAttribute_t2792_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7745(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2793_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var;
void GUIStateObjects_t2804_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9624(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2913 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2913 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9945(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2807_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2807_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2807_CustomAttributesCacheGenerator_Achievement_get_id_m9646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2807_CustomAttributesCacheGenerator_Achievement_set_id_m9647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2807_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2807_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9649(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2808_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2808_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2808_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2809_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2809_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2809_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2809_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2809_CustomAttributesCacheGenerator_Score_get_value_m9668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2809_CustomAttributesCacheGenerator_Score_set_value_m9669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_get_id_m9677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_set_id_m9678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_get_range_m9681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_set_range_m9682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7744(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7745(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void TooltipAttribute_t1060_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7744(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7745(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void SpaceAttribute_t1058_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7744(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7745(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void RangeAttribute_t1055_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7744(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7745(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1061_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7744(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7745(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1059_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7744(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7745(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2913 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2913 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9945(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2913 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2913 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9945(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2913 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2913 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2913_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9945(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2825_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7745(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void ArgumentCache_t2832_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void ArgumentCache_t2832_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
void ArgumentCache_t2832_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
void ArgumentCache_t2832_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
void ArgumentCache_t2832_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void ArgumentCache_t2832_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
void PersistentCall_t2836_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
void PersistentCall_t2836_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void PersistentCall_t2836_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void PersistentCall_t2836_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
void PersistentCall_t2836_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2838_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void UnityEventBase_t2841_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1049 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1049 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1049_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5965(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t750_il2cpp_TypeInfo_var;
void UnityEventBase_t2841_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t750 * tmp;
		tmp = (SerializeField_t750 *)il2cpp_codegen_object_new (SerializeField_t750_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4100(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t1048_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2842_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1826);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1048 * tmp;
		tmp = (AddComponentMenu_t1048 *)il2cpp_codegen_object_new (AddComponentMenu_t1048_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m5964(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2843_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2844_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1049_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7745(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m7744(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t753_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2846_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t753 * tmp;
		tmp = (AttributeUsageAttribute_t753 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t753_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4217(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[814] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2630_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8424,
	AssetBundleCreateRequest_t2630_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8425,
	AssetBundle_t2632_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8429,
	AssetBundle_t2632_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8430,
	AssetBundle_t2632_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8431,
	LayerMask_t837_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8434,
	LayerMask_t837_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8435,
	LayerMask_t837_CustomAttributesCacheGenerator_LayerMask_t837_LayerMask_GetMask_m8436_Arg0_ParameterInfo,
	RuntimePlatform_t2636_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t2636_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t2636_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t2636_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t2636_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2637_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4075,
	SystemInfo_t2637_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8437,
	SystemInfo_t2637_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7520,
	Coroutine_t892_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8440,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8442,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8442_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8443,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8445,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8450,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8451,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8452,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8453,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8454,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8455,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8456,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8457,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8458,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8459,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8460,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8461,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8462,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8463,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8464,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8465,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8466,
	GameCenterPlatform_t747_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8468,
	GcLeaderboard_t2649_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8512,
	GcLeaderboard_t2649_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8513,
	GcLeaderboard_t2649_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8514,
	GcLeaderboard_t2649_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8515,
	MeshFilter_t739_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3931,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8516,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_t481_Mesh_Internal_Create_m8516_Arg0_ParameterInfo,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_vertices_m3932,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_triangles_m3933,
	Renderer_t563_CustomAttributesCacheGenerator_Renderer_set_enabled_m3783,
	Renderer_t563_CustomAttributesCacheGenerator_Renderer_get_material_m3762,
	Renderer_t563_CustomAttributesCacheGenerator_Renderer_set_material_m3764,
	Renderer_t563_CustomAttributesCacheGenerator_Renderer_set_materials_m4029,
	Renderer_t563_CustomAttributesCacheGenerator_Renderer_get_bounds_m3792,
	Renderer_t563_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5601,
	Renderer_t563_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5602,
	Screen_t2651_CustomAttributesCacheGenerator_Screen_get_width_m3422,
	Screen_t2651_CustomAttributesCacheGenerator_Screen_get_height_m3437,
	Screen_t2651_CustomAttributesCacheGenerator_Screen_get_dpi_m3544,
	Screen_t2651_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3857,
	Screen_t2651_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3858,
	Screen_t2651_CustomAttributesCacheGenerator_Screen_get_orientation_m3436,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8538,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8539,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8543,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8543_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5643,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5718,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8544,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8544_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8544_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3462,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3461,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8545,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3463,
	RenderTexture_t2652_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8546,
	RenderTexture_t2652_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8547,
	GUILayer_t2655_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8551,
	Gradient_t2658_CustomAttributesCacheGenerator_Gradient_Init_m8555,
	Gradient_t2658_CustomAttributesCacheGenerator_Gradient_Cleanup_m8556,
	GUI_t654_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t654_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t654_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8563,
	GUI_t654_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8564,
	GUI_t654_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8565,
	GUI_t654_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8566,
	GUI_t654_CustomAttributesCacheGenerator_GUI_set_changed_m8568,
	GUI_t654_CustomAttributesCacheGenerator_GUI_get_enabled_m8569,
	GUI_t654_CustomAttributesCacheGenerator_GUI_set_enabled_m3455,
	GUI_t654_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8571,
	GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8574,
	GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8577,
	GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8584,
	GUI_t654_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8591,
	GUI_t654_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8593,
	GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8600,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_Label_m3433_Arg1_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_Box_m3449_Arg1_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_Button_m3431_Arg1_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_TextField_m3434_Arg1_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_TextField_m3870_Arg2_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_Toggle_m3479_Arg2_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_SelectionGrid_m3477_Arg3_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_SelectionGrid_m8607_Arg4_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginHorizontal_m3432_Arg0_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginHorizontal_m8608_Arg2_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginVertical_m3446_Arg0_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginVertical_m8609_Arg2_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginScrollView_m3454_Arg1_ParameterInfo,
	GUILayout_t2661_CustomAttributesCacheGenerator_GUILayout_t2661_GUILayout_BeginScrollView_m8610_Arg6_ParameterInfo,
	GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8625,
	GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8627,
	GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8628,
	GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_t653_GUILayoutUtility_GetRect_m8631_Arg2_ParameterInfo,
	GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_t653_GUILayoutUtility_GetRect_m8633_Arg3_ParameterInfo,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8675,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8679,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8683,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8684,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8685,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8686,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8687,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8688,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8690,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8692,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8696,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8697,
	GUIUtility_t2673_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8698,
	GUIClip_t2674_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8700,
	GUIClip_t2674_CustomAttributesCacheGenerator_GUIClip_Pop_m8701,
	GUISettings_t2675_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2675_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2675_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2675_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2675_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t730_CustomAttributesCacheGenerator,
	GUISkin_t730_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t730_CustomAttributesCacheGenerator_m_box,
	GUISkin_t730_CustomAttributesCacheGenerator_m_button,
	GUISkin_t730_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t730_CustomAttributesCacheGenerator_m_label,
	GUISkin_t730_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t730_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t730_CustomAttributesCacheGenerator_m_window,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t730_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t730_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t730_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t732_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t732_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t732_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_Init_m8770,
	GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8771,
	GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8772,
	GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8773,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_Init_m8776,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8777,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_left_m5909,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_left_m8778,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_right_m8779,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_right_m8780,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_top_m5910,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_top_m8781,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3881,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8782,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5903,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5904,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8784,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8786,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8790,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8791,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8792,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8793,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8794,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8795,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8797,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8798,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8799,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3423,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8800,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3424,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8801,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8802,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8803,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3428,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8804,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3427,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8805,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3524,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3525,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8808,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8811,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8812_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8814,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8815,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8819,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8821,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8823,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8826,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8829,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8831,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5805,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5806,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg1_ParameterInfo,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg2_ParameterInfo,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg3_ParameterInfo,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg4_ParameterInfo,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg5_ParameterInfo,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_t887_TouchScreenKeyboard_Open_m8832_Arg6_ParameterInfo,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5745,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5746,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5804,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5744,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5803,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5756,
	TouchScreenKeyboard_t887_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5755,
	Event_t733_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t733_CustomAttributesCacheGenerator_Event_Init_m8833,
	Event_t733_CustomAttributesCacheGenerator_Event_Cleanup_m8835,
	Event_t733_CustomAttributesCacheGenerator_Event_get_rawType_m5769,
	Event_t733_CustomAttributesCacheGenerator_Event_get_type_m3878,
	Event_t733_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8836,
	Event_t733_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8838,
	Event_t733_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8840,
	Event_t733_CustomAttributesCacheGenerator_Event_get_modifiers_m5765,
	Event_t733_CustomAttributesCacheGenerator_Event_get_character_m5767,
	Event_t733_CustomAttributesCacheGenerator_Event_get_commandName_m8841,
	Event_t733_CustomAttributesCacheGenerator_Event_get_keyCode_m5766,
	Event_t733_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8842,
	Event_t733_CustomAttributesCacheGenerator_Event_Use_m8844,
	Event_t733_CustomAttributesCacheGenerator_Event_PopEvent_m5770,
	EventModifiers_t2684_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t496_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t705_CustomAttributesCacheGenerator,
	Quaternion_t734_CustomAttributesCacheGenerator,
	Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8870,
	Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8873,
	Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8875,
	Matrix4x4_t1024_CustomAttributesCacheGenerator,
	Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8891,
	Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8893,
	Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8895,
	Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8898,
	Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8910,
	Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8913,
	Matrix4x4_t1024_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8914,
	Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8931,
	Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8934,
	Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8937,
	Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8941,
	Vector4_t984_CustomAttributesCacheGenerator,
	Mathf_t677_CustomAttributesCacheGenerator_Mathf_t677_Mathf_SmoothDamp_m5828_Arg4_ParameterInfo,
	Mathf_t677_CustomAttributesCacheGenerator_Mathf_t677_Mathf_SmoothDamp_m5828_Arg5_ParameterInfo,
	DrivenTransformProperties_t2686_CustomAttributesCacheGenerator,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8972,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8973,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8974,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8975,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8976,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8977,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8978,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8979,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8980,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8981,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8982,
	Resources_t737_CustomAttributesCacheGenerator_Resources_Load_m8988,
	TextAsset_t729_CustomAttributesCacheGenerator_TextAsset_get_text_m3861,
	SerializePrivateVariables_t2690_CustomAttributesCacheGenerator,
	Shader_t2691_CustomAttributesCacheGenerator_Shader_PropertyToID_m8991,
	Material_t482_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m8994,
	Material_t482_CustomAttributesCacheGenerator_Material_SetTexture_m8996,
	Material_t482_CustomAttributesCacheGenerator_Material_GetTexture_m8998,
	Material_t482_CustomAttributesCacheGenerator_Material_SetFloat_m9000,
	Material_t482_CustomAttributesCacheGenerator_Material_HasProperty_m9001,
	Material_t482_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9002,
	Material_t482_CustomAttributesCacheGenerator_Material_t482_Material_Internal_CreateWithMaterial_m9002_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2692_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2692_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9005,
	SphericalHarmonicsL2_t2692_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9008,
	SphericalHarmonicsL2_t2692_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9011,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_rect_m5696,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5692,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_texture_m5689,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5715,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_border_m5690,
	SpriteRenderer_t611_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9021,
	SpriteRenderer_t611_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9022,
	DataUtility_t2693_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5703,
	DataUtility_t2693_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5702,
	DataUtility_t2693_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5695,
	DataUtility_t2693_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9023,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9026,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9027,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3944,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9028_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9029,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9032,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3615,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9033,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7478,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7484,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3466,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9036_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3465,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9038_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9038_Arg3_ParameterInfo,
	WWWTranscoder_t2695_CustomAttributesCacheGenerator_WWWTranscoder_t2695_WWWTranscoder_URLEncode_m9042_Arg1_ParameterInfo,
	WWWTranscoder_t2695_CustomAttributesCacheGenerator_WWWTranscoder_t2695_WWWTranscoder_QPEncode_m9044_Arg1_ParameterInfo,
	WWWTranscoder_t2695_CustomAttributesCacheGenerator_WWWTranscoder_t2695_WWWTranscoder_SevenBitClean_m9047_Arg1_ParameterInfo,
	CacheIndex_t2696_CustomAttributesCacheGenerator,
	UnityString_t2697_CustomAttributesCacheGenerator_UnityString_t2697_UnityString_Format_m9049_Arg1_ParameterInfo,
	AsyncOperation_t2631_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9051,
	Application_t1461_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3516,
	Application_t1461_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9058,
	Application_t1461_CustomAttributesCacheGenerator_Application_get_isPlaying_m5808,
	Application_t1461_CustomAttributesCacheGenerator_Application_get_isEditor_m5810,
	Application_t1461_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3827,
	Application_t1461_CustomAttributesCacheGenerator_Application_get_platform_m3530,
	Application_t1461_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4038,
	Application_t1461_CustomAttributesCacheGenerator_Application_t1461_Application_ExternalCall_m3828_Arg1_ParameterInfo,
	Application_t1461_CustomAttributesCacheGenerator_Application_t1461_Application_BuildInvocationForArguments_m9060_Arg1_ParameterInfo,
	Application_t1461_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9061,
	Application_t1461_CustomAttributesCacheGenerator_Application_OpenURL_m3721,
	Application_t1461_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9063,
	Application_t1461_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1461_CustomAttributesCacheGenerator_Application_t1461____persistentDataPath_PropertyInfo,
	Behaviour_t1034_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5539,
	Behaviour_t1034_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5778,
	Behaviour_t1034_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5540,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5592,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5591,
	Camera_t531_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4054,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_depth_m5504,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5605,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_eventMask_m9070,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9071,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9072,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9073,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9075,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9076,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9077,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9078,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9079,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9080,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_main_m3768,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9081,
	Camera_t531_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9082,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9087,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9089,
	CameraCallback_t2698_CustomAttributesCacheGenerator,
	Debug_t2699_CustomAttributesCacheGenerator_Debug_Internal_Log_m9090,
	Debug_t2699_CustomAttributesCacheGenerator_Debug_t2699_Debug_Internal_Log_m9090_Arg2_ParameterInfo,
	Debug_t2699_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9091,
	Debug_t2699_CustomAttributesCacheGenerator_Debug_t2699_Debug_Internal_LogException_m9091_Arg1_ParameterInfo,
	Debug_t2699_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3826,
	Display_t2702_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9116,
	Display_t2702_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9117,
	Display_t2702_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9118,
	Display_t2702_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9119,
	Display_t2702_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9120,
	Display_t2702_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9121,
	Display_t2702_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9122,
	Display_t2702_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9123,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3776,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3775,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9124,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9125,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9126,
	Input_t656_CustomAttributesCacheGenerator_Input_GetAxis_m4067,
	Input_t656_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5583,
	Input_t656_CustomAttributesCacheGenerator_Input_GetButtonDown_m5582,
	Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButton_m3974,
	Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3771,
	Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3973,
	Input_t656_CustomAttributesCacheGenerator_Input_get_mousePosition_m3769,
	Input_t656_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5556,
	Input_t656_CustomAttributesCacheGenerator_Input_get_mousePresent_m5581,
	Input_t656_CustomAttributesCacheGenerator_Input_GetTouch_m3451,
	Input_t656_CustomAttributesCacheGenerator_Input_get_touchCount_m3450,
	Input_t656_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5807,
	Input_t656_CustomAttributesCacheGenerator_Input_get_compositionString_m5747,
	Input_t656_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9128,
	HideFlags_t2705_CustomAttributesCacheGenerator,
	Object_t652_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9130,
	Object_t652_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9132,
	Object_t652_CustomAttributesCacheGenerator_Object_Destroy_m9133,
	Object_t652_CustomAttributesCacheGenerator_Object_t652_Object_Destroy_m9133_Arg1_ParameterInfo,
	Object_t652_CustomAttributesCacheGenerator_Object_Destroy_m3661,
	Object_t652_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9134,
	Object_t652_CustomAttributesCacheGenerator_Object_t652_Object_DestroyImmediate_m9134_Arg1_ParameterInfo,
	Object_t652_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5809,
	Object_t652_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9135,
	Object_t652_CustomAttributesCacheGenerator_Object_get_name_m3518,
	Object_t652_CustomAttributesCacheGenerator_Object_set_name_m5870,
	Object_t652_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t652_CustomAttributesCacheGenerator_Object_set_hideFlags_m5781,
	Object_t652_CustomAttributesCacheGenerator_Object_ToString_m525,
	Object_t652_CustomAttributesCacheGenerator_Object_Instantiate_m3902,
	Object_t652_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9141,
	Component_t711_CustomAttributesCacheGenerator_Component_get_transform_m3797,
	Component_t711_CustomAttributesCacheGenerator_Component_get_gameObject_m3517,
	Component_t711_CustomAttributesCacheGenerator_Component_GetComponent_m5916,
	Component_t711_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9143,
	Component_t711_CustomAttributesCacheGenerator_Component_GetComponent_m9952,
	Component_t711_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9144,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9146,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9147,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9956,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9148,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9149,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3800,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5783,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5784,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3717,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4052,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4070,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3969,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9150,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9150_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9150_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9151,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9152,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9153,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9153_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9158,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9159,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9160,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9161,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9162,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9163,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9164,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9165,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9166,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9167,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9168,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9169,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3903,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9170,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4046,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9171_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9172,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9173,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4051,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5782,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3904,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4050,
	Time_t2707_CustomAttributesCacheGenerator_Time_get_time_m3923,
	Time_t2707_CustomAttributesCacheGenerator_Time_get_deltaTime_m3945,
	Time_t2707_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5585,
	Time_t2707_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5617,
	Time_t2707_CustomAttributesCacheGenerator_Time_set_timeScale_m3722,
	Random_t2708_CustomAttributesCacheGenerator_Random_set_seed_m3997,
	Random_t2708_CustomAttributesCacheGenerator_Random_Range_m3943,
	Random_t2708_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9175,
	PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9178,
	PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7473,
	PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_t2710_PlayerPrefs_GetString_m7473_Arg1_ParameterInfo,
	PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3681,
	PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3680,
	PlayerPrefs_t2710_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7476,
	LocalNotification_t2711_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9180,
	RemoteNotification_t2712_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9182,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9185,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9186,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9188,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9189,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9190,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9191,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9192,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9193,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9194,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9196,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9197,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9199,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9200,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9201,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9202,
	NotificationServices_t2714_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9203,
	Physics_t2716_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9221,
	Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_Raycast_m9222_Arg3_ParameterInfo,
	Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_Raycast_m9222_Arg4_ParameterInfo,
	Physics_t2716_CustomAttributesCacheGenerator_Physics_Raycast_m3772,
	Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_Raycast_m5669_Arg2_ParameterInfo,
	Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_Raycast_m5669_Arg3_ParameterInfo,
	Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_RaycastAll_m5607_Arg1_ParameterInfo,
	Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_RaycastAll_m5607_Arg2_ParameterInfo,
	Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_RaycastAll_m9223_Arg2_ParameterInfo,
	Physics_t2716_CustomAttributesCacheGenerator_Physics_t2716_Physics_RaycastAll_m9223_Arg3_ParameterInfo,
	Physics_t2716_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9224,
	Collider_t714_CustomAttributesCacheGenerator_Collider_set_enabled_m3784,
	Collider_t714_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9225,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3975,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_t743_Physics2D_IgnoreLayerCollision_m3975_Arg2_ParameterInfo,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9229,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_Raycast_m5670,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_t743_Physics2D_Raycast_m9230_Arg2_ParameterInfo,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_t743_Physics2D_Raycast_m9230_Arg3_ParameterInfo,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_t743_Physics2D_Raycast_m9230_Arg4_ParameterInfo,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_t743_Physics2D_Raycast_m9230_Arg5_ParameterInfo,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5595,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9231,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3968,
	Physics2D_t743_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9232,
	Collider2D_t577_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4035,
	Collider2D_t577_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9234,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_set_clip_m3760,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Play_m9250,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_t569_AudioSource_Play_m9250_Arg0_ParameterInfo,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Play_m4031,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4049,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Stop_m3761,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4032,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9251,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_t569_AudioSource_PlayOneShot_m9251_Arg1_ParameterInfo,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3774,
	AnimationEvent_t2727_CustomAttributesCacheGenerator_AnimationEvent_t2727____data_PropertyInfo,
	AnimationCurve_t2731_CustomAttributesCacheGenerator,
	AnimationCurve_t2731_CustomAttributesCacheGenerator_AnimationCurve_t2731_AnimationCurve__ctor_m9277_Arg0_ParameterInfo,
	AnimationCurve_t2731_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9279,
	AnimationCurve_t2731_CustomAttributesCacheGenerator_AnimationCurve_Init_m9281,
	AnimatorStateInfo_t2728_CustomAttributesCacheGenerator_AnimatorStateInfo_t2728____nameHash_PropertyInfo,
	Animator_t619_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5862,
	Animator_t619_CustomAttributesCacheGenerator_Animator_StringToHash_m9300,
	Animator_t619_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9301,
	Animator_t619_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9302,
	Animator_t619_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9303,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3766,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3767,
	CharacterInfo_t2737_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2737_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2737_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2737_CustomAttributesCacheGenerator_flipped,
	Font_t852_CustomAttributesCacheGenerator_Font_get_material_m5874,
	Font_t852_CustomAttributesCacheGenerator_Font_HasCharacter_m5768,
	Font_t852_CustomAttributesCacheGenerator_Font_get_dynamic_m5876,
	Font_t852_CustomAttributesCacheGenerator_Font_get_fontSize_m5877,
	FontTextureRebuildCallback_t2738_CustomAttributesCacheGenerator,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_Init_m9331,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9332,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9335,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5780,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9336,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9337,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9338,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9339,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9340,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9341,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5761,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9342,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9343,
	TextGenerator_t890_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5796,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5666,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5891,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3954,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9354,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4078,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5894,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5693,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5895,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5653,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5668,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5667,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5674,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5640,
	Canvas_t627_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5873,
	CanvasGroup_t1006_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5854,
	CanvasGroup_t1006_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9356,
	CanvasGroup_t1006_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5652,
	CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9359,
	CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5656,
	CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5926,
	CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5648,
	CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9360,
	CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9361,
	CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5644,
	CanvasRenderer_t857_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5641,
	RectTransformUtility_t1008_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9363,
	RectTransformUtility_t1008_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9365,
	RectTransformUtility_t1008_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5655,
	Request_t2742_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2742_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2742_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2742_CustomAttributesCacheGenerator_Request_get_sourceId_m9370,
	Request_t2742_CustomAttributesCacheGenerator_Request_get_appId_m9371,
	Request_t2742_CustomAttributesCacheGenerator_Request_get_domain_m9372,
	Response_t2744_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2744_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2744_CustomAttributesCacheGenerator_Response_get_success_m9381,
	Response_t2744_CustomAttributesCacheGenerator_Response_set_success_m9382,
	Response_t2744_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9383,
	Response_t2744_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9384,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9389,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9390,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9391,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9392,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9393,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9394,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9395,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9396,
	CreateMatchRequest_t2747_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9397,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9400,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9401,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9402,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9403,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9404,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9405,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9406,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9407,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9408,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9409,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9410,
	CreateMatchResponse_t2748_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9411,
	JoinMatchRequest_t2749_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2749_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2749_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9415,
	JoinMatchRequest_t2749_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9416,
	JoinMatchRequest_t2749_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9417,
	JoinMatchRequest_t2749_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9418,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9421,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9422,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9423,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9424,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9425,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9426,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9427,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9428,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9429,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9430,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9431,
	JoinMatchResponse_t2750_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9432,
	DestroyMatchRequest_t2751_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2751_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9436,
	DestroyMatchRequest_t2751_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9437,
	DropConnectionRequest_t2752_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2752_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2752_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9440,
	DropConnectionRequest_t2752_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9441,
	DropConnectionRequest_t2752_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9442,
	DropConnectionRequest_t2752_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9443,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9446,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9447,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9448,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9449,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9450,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9451,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9452,
	ListMatchRequest_t2753_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9453,
	MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9456,
	MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9457,
	MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9458,
	MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9459,
	MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9460,
	MatchDirectConnectInfo_t2754_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9461,
	MatchDesc_t2756_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2756_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2756_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2756_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2756_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2756_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2756_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2756_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2756_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9465,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9466,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_name_m9467,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_name_m9468,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9469,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9470,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9471,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9472,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9473,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9474,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9475,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9476,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9477,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9478,
	MatchDesc_t2756_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9479,
	ListMatchResponse_t2758_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2758_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9483,
	ListMatchResponse_t2758_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9484,
	AppID_t2759_CustomAttributesCacheGenerator,
	SourceID_t2760_CustomAttributesCacheGenerator,
	NetworkID_t2761_CustomAttributesCacheGenerator,
	NodeID_t2762_CustomAttributesCacheGenerator,
	NetworkMatch_t2767_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9968,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2918_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2918_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9974,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2918_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9975,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2918_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9977,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2918_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9978,
	JsonArray_t2768_CustomAttributesCacheGenerator,
	JsonObject_t2769_CustomAttributesCacheGenerator,
	SimpleJson_t2772_CustomAttributesCacheGenerator,
	SimpleJson_t2772_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9529,
	SimpleJson_t2772_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9541,
	SimpleJson_t2772_CustomAttributesCacheGenerator_SimpleJson_t2772____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2770_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2770_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9982,
	PocoJsonSerializerStrategy_t2771_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2771_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9558,
	PocoJsonSerializerStrategy_t2771_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9559,
	ReflectionUtils_t2784_CustomAttributesCacheGenerator,
	ReflectionUtils_t2784_CustomAttributesCacheGenerator_ReflectionUtils_t2784_ReflectionUtils_GetConstructorInfo_m9584_Arg1_ParameterInfo,
	ReflectionUtils_t2784_CustomAttributesCacheGenerator_ReflectionUtils_t2784_ReflectionUtils_GetContructor_m9589_Arg1_ParameterInfo,
	ReflectionUtils_t2784_CustomAttributesCacheGenerator_ReflectionUtils_t2784_ReflectionUtils_GetConstructorByReflection_m9591_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2921_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2778_CustomAttributesCacheGenerator_ConstructorDelegate_t2778_ConstructorDelegate_Invoke_m9569_Arg0_ParameterInfo,
	ConstructorDelegate_t2778_CustomAttributesCacheGenerator_ConstructorDelegate_t2778_ConstructorDelegate_BeginInvoke_m9570_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2779_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2780_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2781_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2782_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2783_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2786_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1057_CustomAttributesCacheGenerator,
	RequireComponent_t1051_CustomAttributesCacheGenerator,
	WritableAttribute_t2792_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2793_CustomAttributesCacheGenerator,
	GUIStateObjects_t2804_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9624,
	Achievement_t2807_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2807_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2807_CustomAttributesCacheGenerator_Achievement_get_id_m9646,
	Achievement_t2807_CustomAttributesCacheGenerator_Achievement_set_id_m9647,
	Achievement_t2807_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9648,
	Achievement_t2807_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9649,
	AchievementDescription_t2808_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2808_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9656,
	AchievementDescription_t2808_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9657,
	Score_t2809_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2809_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2809_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9666,
	Score_t2809_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9667,
	Score_t2809_CustomAttributesCacheGenerator_Score_get_value_m9668,
	Score_t2809_CustomAttributesCacheGenerator_Score_set_value_m9669,
	Leaderboard_t2648_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2648_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2648_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2648_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_get_id_m9677,
	Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_set_id_m9678,
	Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9679,
	Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9680,
	Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_get_range_m9681,
	Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_set_range_m9682,
	Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9683,
	Leaderboard_t2648_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9684,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1060_CustomAttributesCacheGenerator,
	SpaceAttribute_t1058_CustomAttributesCacheGenerator,
	RangeAttribute_t1055_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1061_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1059_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9728,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9730,
	SharedBetweenAnimatorsAttribute_t2825_CustomAttributesCacheGenerator,
	ArgumentCache_t2832_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2832_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2832_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2832_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2832_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2832_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2836_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2836_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2836_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2836_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2836_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2838_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2841_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2841_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2842_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2843_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2844_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1049_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2846_CustomAttributesCacheGenerator,
};
