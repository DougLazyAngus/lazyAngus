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
extern TypeInfo* InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t817_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3446);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t817 * tmp;
		tmp = (ExtensionAttribute_t817 *)il2cpp_codegen_object_new (ExtensionAttribute_t817_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4505(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2179 * tmp;
		tmp = (InternalsVisibleToAttribute_t2179 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2179_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8000(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2698_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2698_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var;
void AssetBundle_t2700_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4624);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2913 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2913 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10228(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var;
void AssetBundle_t2700_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4624);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2913 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2913 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10228(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AssetBundle_t2700_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void LayerMask_t913_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void LayerMask_t913_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void LayerMask_t913_CustomAttributesCacheGenerator_LayerMask_t913_LayerMask_GetMask_m8851_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void RuntimePlatform_t800_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void RuntimePlatform_t800_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void RuntimePlatform_t800_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void RuntimePlatform_t800_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void RuntimePlatform_t800_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void SystemInfo_t2704_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void SystemInfo_t2704_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void SystemInfo_t2704_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Coroutine_t968_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2859_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8857_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4625);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2859 * tmp;
		tmp = (WritableAttribute_t2859 *)il2cpp_codegen_object_new (WritableAttribute_t2859_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10025(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GcLeaderboard_t2716_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GcLeaderboard_t2716_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GcLeaderboard_t2716_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GcLeaderboard_t2716_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void MeshFilter_t806_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2859_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_t525_Mesh_Internal_Create_m8931_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4625);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2859 * tmp;
		tmp = (WritableAttribute_t2859 *)il2cpp_codegen_object_new (WritableAttribute_t2859_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10025(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_vertices_m4494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_uv_m4496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4497(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_triangles_m4495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Renderer_t602_CustomAttributesCacheGenerator_Renderer_set_enabled_m4170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Renderer_t602_CustomAttributesCacheGenerator_Renderer_get_material_m4149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Renderer_t602_CustomAttributesCacheGenerator_Renderer_set_material_m4151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Renderer_t602_CustomAttributesCacheGenerator_Renderer_set_materials_m4422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Renderer_t602_CustomAttributesCacheGenerator_Renderer_get_bounds_m4179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Renderer_t602_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m6026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Renderer_t602_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m6027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Screen_t2718_CustomAttributesCacheGenerator_Screen_get_width_m3809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Screen_t2718_CustomAttributesCacheGenerator_Screen_get_height_m3824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Screen_t2718_CustomAttributesCacheGenerator_Screen_get_dpi_m3931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Screen_t2718_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Screen_t2718_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4245(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Screen_t2718_CustomAttributesCacheGenerator_Screen_get_orientation_m3823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8953(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2859_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8958_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4625);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2859 * tmp;
		tmp = (WritableAttribute_t2859 *)il2cpp_codegen_object_new (WritableAttribute_t2859_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10025(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m6068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m6142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8959_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8959_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RenderTexture_t2719_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RenderTexture_t2719_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUILayer_t2722_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Gradient_t2725_CustomAttributesCacheGenerator_Gradient_Init_m8970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Gradient_t2725_CustomAttributesCacheGenerator_Gradient_Cleanup_m8971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t719_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
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
void GUI_t719_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
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
void GUI_t719_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8978(CustomAttributesCache* cache)
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
void GUI_t719_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8979(CustomAttributesCache* cache)
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
void GUI_t719_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8980(CustomAttributesCache* cache)
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
void GUI_t719_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8981(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUI_t719_CustomAttributesCacheGenerator_GUI_set_changed_m8983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUI_t719_CustomAttributesCacheGenerator_GUI_get_enabled_m8984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUI_t719_CustomAttributesCacheGenerator_GUI_set_enabled_m3842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUI_t719_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUI_t719_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUI_t719_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUI_t719_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUI_t719_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m9006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUI_t719_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m9008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUI_t719_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m9015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_Label_m3820_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_Box_m3836_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_Button_m3818_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_TextField_m3821_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_TextField_m4257_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_Toggle_m3866_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_SelectionGrid_m3864_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_SelectionGrid_m9022_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginHorizontal_m3819_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginHorizontal_m9023_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginVertical_m3833_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginVertical_m9024_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginScrollView_m3841_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginScrollView_m9025_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUILayoutUtility_t718_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m9040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUILayoutUtility_t718_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m9042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void GUILayoutUtility_t718_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m9043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4627);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10357(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayoutUtility_t718_CustomAttributesCacheGenerator_GUILayoutUtility_t718_GUILayoutUtility_GetRect_m9046_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void GUILayoutUtility_t718_CustomAttributesCacheGenerator_GUILayoutUtility_t718_GUILayoutUtility_GetRect_m9048_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m9090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m9094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m9098(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m9099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m9100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m9101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m9102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m9103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m9105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m9107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m9111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m9112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m9113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIClip_t2741_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m9115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIClip_t2741_CustomAttributesCacheGenerator_GUIClip_Pop_m9116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISettings_t2742_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISettings_t2742_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISettings_t2742_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISettings_t2742_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISettings_t2742_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t824_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t824_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t824 * tmp;
		tmp = (ExecuteInEditMode_t824 *)il2cpp_codegen_object_new (ExecuteInEditMode_t824_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m4646(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUISkin_t794_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUIContent_t796_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUIContent_t796_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void GUIContent_t796_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyleState_t739_CustomAttributesCacheGenerator_GUIStyleState_Init_m9185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyleState_t739_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyleState_t739_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyleState_t739_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_Init_m9191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_left_m6330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_set_left_m9193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_right_m9194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_set_right_m9195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_top_m6331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_set_top_m9196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9227_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9241(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9246(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_Init_m9248(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_Cleanup_m9250(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_get_rawType_m6194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_get_type_m4265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9253(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_get_modifiers_m6190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_get_character_m6192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_get_commandName_m9256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_get_keyCode_m6191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_Use_m9259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Event_t797_CustomAttributesCacheGenerator_Event_PopEvent_m6195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1122_il2cpp_TypeInfo_var;
void EventModifiers_t2751_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1996);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1122 * tmp;
		tmp = (FlagsAttribute_t1122 *)il2cpp_codegen_object_new (FlagsAttribute_t1122_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6367(tmp, NULL);
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
void Vector3_t538_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2853_il2cpp_TypeInfo_var;
void Color32_t769_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2853_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4628);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2853 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2853 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2853_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m10017(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t802_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Quaternion_t802_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Quaternion_t802_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Quaternion_t802_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Matrix4x4_t1100_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Bounds_t779_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9345(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Bounds_t779_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Bounds_t779_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Bounds_t779_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t1059_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Mathf_t741_CustomAttributesCacheGenerator_Mathf_t741_Mathf_SmoothDamp_m6250_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Mathf_t741_CustomAttributesCacheGenerator_Mathf_t741_Mathf_SmoothDamp_m6250_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1122_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2753_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1996);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1122 * tmp;
		tmp = (FlagsAttribute_t1122 *)il2cpp_codegen_object_new (FlagsAttribute_t1122_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6367(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Resources_t804_CustomAttributesCacheGenerator_Resources_Load_m4291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4624);
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2913 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2913 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10228(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextAsset_t793_CustomAttributesCacheGenerator_TextAsset_get_text_m4248(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2757_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Shader_t2758_CustomAttributesCacheGenerator_Shader_PropertyToID_m9404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_SetTexture_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_GetTexture_m9411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_SetFloat_m9413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_HasProperty_m9414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2859_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_t526_Material_Internal_CreateWithMaterial_m9415_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4625);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2859 * tmp;
		tmp = (WritableAttribute_t2859 *)il2cpp_codegen_object_new (WritableAttribute_t2859_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10025(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2759_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2759_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2759_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2759_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_rect_m6121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m6117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_texture_m6114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_textureRect_m6139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_border_m6115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void SpriteRenderer_t676_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void SpriteRenderer_t676_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void DataUtility_t2760_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m6127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void DataUtility_t2760_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m6126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void DataUtility_t2760_CustomAttributesCacheGenerator_DataUtility_GetPadding_m6120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void DataUtility_t2760_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9441_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m4002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9449_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9451_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9451_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void WWWTranscoder_t2762_CustomAttributesCacheGenerator_WWWTranscoder_t2762_WWWTranscoder_URLEncode_m9455_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void WWWTranscoder_t2762_CustomAttributesCacheGenerator_WWWTranscoder_t2762_WWWTranscoder_QPEncode_m9457_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void WWWTranscoder_t2762_CustomAttributesCacheGenerator_WWWTranscoder_t2762_WWWTranscoder_SevenBitClean_m9460_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void CacheIndex_t2763_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void UnityString_t2764_CustomAttributesCacheGenerator_UnityString_t2764_UnityString_Format_m9462_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AsyncOperation_t2699_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_get_isPlaying_m4288(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_get_isEditor_m6232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_get_platform_m3917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m7934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_t1529_Application_ExternalCall_m4215_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_t1529_Application_BuildInvocationForArguments_m9473_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_get_unityVersion_m4292(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_OpenURL_m4108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2981_il2cpp_TypeInfo_var;
void Application_t1529_CustomAttributesCacheGenerator_Application_t1529____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2981_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2981 * tmp;
		tmp = (SecurityCriticalAttribute_t2981 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2981_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m10361(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Behaviour_t1110_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5964(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Behaviour_t1110_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6202(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Behaviour_t1110_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m6018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m6017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m4504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_depth_m5930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_cullingMask_m6030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_eventMask_m9483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_main_m4155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var;
void CameraCallback_t2765_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2212 * tmp;
		tmp = (EditorBrowsableAttribute_t2212 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8297(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Debug_t2766_CustomAttributesCacheGenerator_Debug_Internal_Log_m9503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2859_il2cpp_TypeInfo_var;
void Debug_t2766_CustomAttributesCacheGenerator_Debug_t2766_Debug_Internal_Log_m9503_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4625);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2859 * tmp;
		tmp = (WritableAttribute_t2859 *)il2cpp_codegen_object_new (WritableAttribute_t2859_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10025(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Debug_t2766_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2859_il2cpp_TypeInfo_var;
void Debug_t2766_CustomAttributesCacheGenerator_Debug_t2766_Debug_Internal_LogException_m9504_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4625);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2859 * tmp;
		tmp = (WritableAttribute_t2859 *)il2cpp_codegen_object_new (WritableAttribute_t2859_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10025(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Debug_t2766_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Display_t2769_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Display_t2769_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Display_t2769_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Display_t2769_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Display_t2769_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Display_t2769_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Display_t2769_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Display_t2769_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9537(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_GetAxisRaw_m6009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_GetButtonDown_m6008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_GetMouseButton_m4372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m4158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_get_mousePosition_m4156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_get_mousePresent_m6007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_GetTouch_m3838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_get_touchCount_m3837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_get_compositionString_m6171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Input_t721_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1122_il2cpp_TypeInfo_var;
void HideFlags_t2772_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1996);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1122 * tmp;
		tmp = (FlagsAttribute_t1122 *)il2cpp_codegen_object_new (FlagsAttribute_t1122_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6367(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_Destroy_m9546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_t717_Object_Destroy_m9546_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_Destroy_m4048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_t717_Object_DestroyImmediate_m9547_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4624);
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2913 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2913 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10228(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_get_name_m3905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_set_name_m6291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_set_hideFlags_m6205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_ToString_m527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_Instantiate_m4309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4624);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2913 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2913 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10228(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var;
void Object_t717_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4624);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2913 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2913 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10228(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Component_t775_CustomAttributesCacheGenerator_Component_get_transform_m4184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Component_t775_CustomAttributesCacheGenerator_Component_get_gameObject_m3904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var;
void Component_t775_CustomAttributesCacheGenerator_Component_GetComponent_m6337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4624);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2913 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2913 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10228(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Component_t775_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void Component_t775_CustomAttributesCacheGenerator_Component_GetComponent_m10364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4627);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10357(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Component_t775_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4624);
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2913 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2913 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10228(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4627);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10357(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4624);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2913 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2913 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10228(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m4104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9563_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9563_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4624);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2913 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2913 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2913_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10228(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2859_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9566_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4625);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2859 * tmp;
		tmp = (WritableAttribute_t2859 *)il2cpp_codegen_object_new (WritableAttribute_t2859_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10025(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9584_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Time_t2774_CustomAttributesCacheGenerator_Time_get_time_m4289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Time_t2774_CustomAttributesCacheGenerator_Time_get_deltaTime_m4295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Time_t2774_CustomAttributesCacheGenerator_Time_get_unscaledTime_m6011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Time_t2774_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m6042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Time_t2774_CustomAttributesCacheGenerator_Time_set_timeScale_m4109(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Random_t2775_CustomAttributesCacheGenerator_Random_set_seed_m4396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Random_t2775_CustomAttributesCacheGenerator_Random_Range_m4343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Random_t2775_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m9592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m9593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m4452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_t2777_PlayerPrefs_GetInt_m4452_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m4450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_t2777_PlayerPrefs_GetFloat_m4450_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_t2777_PlayerPrefs_GetString_m7889_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m4068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m4067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m4448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void LocalNotification_t2778_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RemoteNotification_t2779_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9610(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Physics_t2783_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_Raycast_m9638_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_Raycast_m9638_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void Physics_t2783_CustomAttributesCacheGenerator_Physics_Raycast_m4159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_Raycast_m6094_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_Raycast_m6094_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_RaycastAll_m6032_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_RaycastAll_m6032_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_RaycastAll_m9639_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_RaycastAll_m9639_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Physics_t2783_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Collider_t778_CustomAttributesCacheGenerator_Collider_set_enabled_m4171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Collider_t778_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_t810_Physics2D_IgnoreLayerCollision_m4373_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_Raycast_m6095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_t810_Physics2D_Raycast_m9646_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_t810_Physics2D_Raycast_m9646_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_t810_Physics2D_Raycast_m9646_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_t810_Physics2D_Raycast_m9646_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m6021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Collider2D_t713_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Collider2D_t713_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CircleCollider2D_t622_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CircleCollider2D_t622_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_set_clip_m4147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_Play_m9666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_t613_AudioSource_Play_m9666_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_Play_m4435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_Stop_m4148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_INTERNAL_CALL_Pause_m9667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2910_il2cpp_TypeInfo_var;
void AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_t613_AudioSource_PlayOneShot_m9668_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2910_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4621);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2910 * tmp;
		tmp = (DefaultValueAttribute_t2910 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2910_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var;
void AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m4161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4626);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2911 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2911 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2911_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void AnimationEvent_t2794_CustomAttributesCacheGenerator_AnimationEvent_t2794____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void AnimationCurve_t2798_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void AnimationCurve_t2798_CustomAttributesCacheGenerator_AnimationCurve_t2798_AnimationCurve__ctor_m9694_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AnimationCurve_t2798_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void AnimationCurve_t2798_CustomAttributesCacheGenerator_AnimationCurve_Init_m9698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2795_CustomAttributesCacheGenerator_AnimatorStateInfo_t2795____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Animator_t1061_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Animator_t1061_CustomAttributesCacheGenerator_Animator_StringToHash_m9717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Animator_t1061_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Animator_t1061_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m4153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m4154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void CharacterInfo_t2804_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void CharacterInfo_t2804_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void CharacterInfo_t2804_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t821_il2cpp_TypeInfo_var;
void CharacterInfo_t2804_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t821 * tmp;
		tmp = (ObsoleteAttribute_t821 *)il2cpp_codegen_object_new (ObsoleteAttribute_t821_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4612(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Font_t929_CustomAttributesCacheGenerator_Font_get_material_m6295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Font_t929_CustomAttributesCacheGenerator_Font_HasCharacter_m6193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Font_t929_CustomAttributesCacheGenerator_Font_get_dynamic_m6297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Font_t929_CustomAttributesCacheGenerator_Font_get_fontSize_m6298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2805_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2212 * tmp;
		tmp = (EditorBrowsableAttribute_t2212 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8297(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_Init_m9747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_renderMode_m6091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m6118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m6078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m6093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m6092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m6099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m6065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CanvasGroup_t1082_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CanvasGroup_t1082_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CanvasGroup_t1082_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m6077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m6081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m6073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m6069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m6066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransformUtility_t1084_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransformUtility_t1084_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2852_il2cpp_TypeInfo_var;
void RectTransformUtility_t1084_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m6080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4623);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2852 * tmp;
		tmp = (WrapperlessIcall_t2852 *)il2cpp_codegen_object_new (WrapperlessIcall_t2852_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2809_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t2809_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t2809_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t2809_CustomAttributesCacheGenerator_Request_get_sourceId_m9786(CustomAttributesCache* cache)
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
void Request_t2809_CustomAttributesCacheGenerator_Request_get_appId_m9787(CustomAttributesCache* cache)
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
void Request_t2809_CustomAttributesCacheGenerator_Request_get_domain_m9788(CustomAttributesCache* cache)
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
void Response_t2811_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
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
void Response_t2811_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
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
void Response_t2811_CustomAttributesCacheGenerator_Response_get_success_m9797(CustomAttributesCache* cache)
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
void Response_t2811_CustomAttributesCacheGenerator_Response_set_success_m9798(CustomAttributesCache* cache)
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
void Response_t2811_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9799(CustomAttributesCache* cache)
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
void Response_t2811_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9800(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9805(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9806(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9807(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9808(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9809(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9810(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9811(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9812(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9813(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9816(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9817(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9818(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9819(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9820(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9821(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9822(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9823(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9824(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9825(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9826(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9827(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2816_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2816_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2816_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9831(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2816_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9832(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2816_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9833(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2816_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9834(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9837(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9838(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9839(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9840(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9841(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9842(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9843(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9844(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9845(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9846(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9847(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9848(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t2818_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t2818_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9852(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t2818_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9853(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2819_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2819_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2819_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9856(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2819_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9857(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2819_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9858(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2819_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9859(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9862(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9863(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9864(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9865(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9866(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9867(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9868(CustomAttributesCache* cache)
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
void ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9869(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9872(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9873(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9874(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9875(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9876(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9877(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9881(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9882(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_name_m9883(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_name_m9884(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9885(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9886(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9887(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9888(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9889(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9890(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9891(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9892(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9893(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9894(CustomAttributesCache* cache)
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
void MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9895(CustomAttributesCache* cache)
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
void ListMatchResponse_t2825_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchResponse_t2825_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9899(CustomAttributesCache* cache)
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
void ListMatchResponse_t2825_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9900(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2983_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2826_il2cpp_TypeInfo_var;
void AppID_t2826_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2983_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		AppID_t2826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4531);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2983 * tmp;
		tmp = (DefaultValueAttribute_t2983 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2983_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10379(tmp, Box(AppID_t2826_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2983_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2827_il2cpp_TypeInfo_var;
void SourceID_t2827_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2983_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		SourceID_t2827_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4530);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2983 * tmp;
		tmp = (DefaultValueAttribute_t2983 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2983_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10379(tmp, Box(SourceID_t2827_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2983_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2828_il2cpp_TypeInfo_var;
void NetworkID_t2828_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2983_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		NetworkID_t2828_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4533);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2983 * tmp;
		tmp = (DefaultValueAttribute_t2983 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2983_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10379(tmp, Box(NetworkID_t2828_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2983_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2829_il2cpp_TypeInfo_var;
void NodeID_t2829_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2983_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		NodeID_t2829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2983 * tmp;
		tmp = (DefaultValueAttribute_t2983 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2983_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10379(tmp, Box(NodeID_t2829_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2834_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10380(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2985_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2985_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10386(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2985_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10387(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2985_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10389(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2985_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10390(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var;
void JsonArray_t2835_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2986 * tmp;
		tmp = (GeneratedCodeAttribute_t2986 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10391(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2212 * tmp;
		tmp = (EditorBrowsableAttribute_t2212 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8297(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void JsonObject_t2836_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3450);
		GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2212 * tmp;
		tmp = (EditorBrowsableAttribute_t2212 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8297(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t2986 * tmp;
		tmp = (GeneratedCodeAttribute_t2986 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10391(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var;
void SimpleJson_t2839_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2986 * tmp;
		tmp = (GeneratedCodeAttribute_t2986 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10391(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var;
void SimpleJson_t2839_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2987 * tmp;
		tmp = (SuppressMessageAttribute_t2987 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10392(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10393(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var;
void SimpleJson_t2839_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9957(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2987 * tmp;
		tmp = (SuppressMessageAttribute_t2987 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10392(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var;
void SimpleJson_t2839_CustomAttributesCacheGenerator_SimpleJson_t2839____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2212 * tmp;
		tmp = (EditorBrowsableAttribute_t2212 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2212_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8297(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2837_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2986 * tmp;
		tmp = (GeneratedCodeAttribute_t2986 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10391(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2837_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2987 * tmp;
		tmp = (SuppressMessageAttribute_t2987 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10392(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10393(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2838_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2986 * tmp;
		tmp = (GeneratedCodeAttribute_t2986 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10391(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2838_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2987 * tmp;
		tmp = (SuppressMessageAttribute_t2987 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10392(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10393(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2838_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2987 * tmp;
		tmp = (SuppressMessageAttribute_t2987 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2987_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10392(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10393(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var;
void ReflectionUtils_t2851_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2986 * tmp;
		tmp = (GeneratedCodeAttribute_t2986 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2986_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10391(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void ReflectionUtils_t2851_CustomAttributesCacheGenerator_ReflectionUtils_t2851_ReflectionUtils_GetConstructorInfo_m10000_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void ReflectionUtils_t2851_CustomAttributesCacheGenerator_ReflectionUtils_t2851_ReflectionUtils_GetContructor_m10005_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void ReflectionUtils_t2851_CustomAttributesCacheGenerator_ReflectionUtils_t2851_ReflectionUtils_GetConstructorByReflection_m10007_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2988_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2845_CustomAttributesCacheGenerator_ConstructorDelegate_t2845_ConstructorDelegate_Invoke_m9985_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t818_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2845_CustomAttributesCacheGenerator_ConstructorDelegate_t2845_ConstructorDelegate_BeginInvoke_m9986_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t818 * tmp;
		tmp = (ParamArrayAttribute_t818 *)il2cpp_codegen_object_new (ParamArrayAttribute_t818_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4524(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2846_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2847_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2848_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2849_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2850_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2853_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1131_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m8159(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void RequireComponent_t823_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8160(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void WritableAttribute_t2859_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8160(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2860_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void GUIStateObjects_t2871_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m10040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4627);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10357(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2874_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void Achievement_t2874_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
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
void Achievement_t2874_CustomAttributesCacheGenerator_Achievement_get_id_m10062(CustomAttributesCache* cache)
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
void Achievement_t2874_CustomAttributesCacheGenerator_Achievement_set_id_m10063(CustomAttributesCache* cache)
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
void Achievement_t2874_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m10064(CustomAttributesCache* cache)
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
void Achievement_t2874_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m10065(CustomAttributesCache* cache)
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
void AchievementDescription_t2875_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void AchievementDescription_t2875_CustomAttributesCacheGenerator_AchievementDescription_get_id_m10072(CustomAttributesCache* cache)
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
void AchievementDescription_t2875_CustomAttributesCacheGenerator_AchievementDescription_set_id_m10073(CustomAttributesCache* cache)
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
void Score_t2876_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
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
void Score_t2876_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
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
void Score_t2876_CustomAttributesCacheGenerator_Score_get_leaderboardID_m10082(CustomAttributesCache* cache)
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
void Score_t2876_CustomAttributesCacheGenerator_Score_set_leaderboardID_m10083(CustomAttributesCache* cache)
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
void Score_t2876_CustomAttributesCacheGenerator_Score_get_value_m10084(CustomAttributesCache* cache)
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
void Score_t2876_CustomAttributesCacheGenerator_Score_set_value_m10085(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_get_id_m10093(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_set_id_m10094(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m10095(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m10096(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_get_range_m10097(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_set_range_m10098(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m10099(CustomAttributesCache* cache)
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
void Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m10100(CustomAttributesCache* cache)
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
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8159(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8160(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void TooltipAttribute_t1134_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8159(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8160(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void SpaceAttribute_t1132_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8159(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8160(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void RangeAttribute_t1130_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8159(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8160(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1135_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8159(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8160(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1133_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m8159(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8160(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4627);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10357(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m10144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4627);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10357(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m10146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4627);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10357(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2892_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8160(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void ArgumentCache_t2899_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void ArgumentCache_t2899_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
void ArgumentCache_t2899_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
void ArgumentCache_t2899_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void ArgumentCache_t2899_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void ArgumentCache_t2899_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
void PersistentCall_t2903_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void PersistentCall_t2903_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
void PersistentCall_t2903_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void PersistentCall_t2903_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void PersistentCall_t2903_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2905_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var;
void UnityEventBase_t2908_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1125 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1125 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1125_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t819_il2cpp_TypeInfo_var;
void UnityEventBase_t2908_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t819 * tmp;
		tmp = (SerializeField_t819 *)il2cpp_codegen_object_new (SerializeField_t819_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4525(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t1124_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2909_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t1124_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1997);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1124 * tmp;
		tmp = (AddComponentMenu_t1124 *)il2cpp_codegen_object_new (AddComponentMenu_t1124_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m6385(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2910_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2911_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1125_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8160(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m8159(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t822_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2913_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t822 * tmp;
		tmp = (AttributeUsageAttribute_t822 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t822_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4642(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[827] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2698_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8839,
	AssetBundleCreateRequest_t2698_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8840,
	AssetBundle_t2700_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8844,
	AssetBundle_t2700_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8845,
	AssetBundle_t2700_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8846,
	LayerMask_t913_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8849,
	LayerMask_t913_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8850,
	LayerMask_t913_CustomAttributesCacheGenerator_LayerMask_t913_LayerMask_GetMask_m8851_Arg0_ParameterInfo,
	RuntimePlatform_t800_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t800_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t800_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t800_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t800_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2704_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4492,
	SystemInfo_t2704_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8852,
	SystemInfo_t2704_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7936,
	Coroutine_t968_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8855,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8857,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8857_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8858,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8860,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8865,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8866,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8867,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8868,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8869,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8870,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8871,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8872,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8873,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8874,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8875,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8876,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8877,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8878,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8879,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8880,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8881,
	GameCenterPlatform_t815_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8883,
	GcLeaderboard_t2716_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8927,
	GcLeaderboard_t2716_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8928,
	GcLeaderboard_t2716_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8929,
	GcLeaderboard_t2716_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8930,
	MeshFilter_t806_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4336,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8931,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_t525_Mesh_Internal_Create_m8931_Arg0_ParameterInfo,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_vertices_m4494,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_uv_m4496,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4497,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_triangles_m4495,
	Renderer_t602_CustomAttributesCacheGenerator_Renderer_set_enabled_m4170,
	Renderer_t602_CustomAttributesCacheGenerator_Renderer_get_material_m4149,
	Renderer_t602_CustomAttributesCacheGenerator_Renderer_set_material_m4151,
	Renderer_t602_CustomAttributesCacheGenerator_Renderer_set_materials_m4422,
	Renderer_t602_CustomAttributesCacheGenerator_Renderer_get_bounds_m4179,
	Renderer_t602_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m6026,
	Renderer_t602_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m6027,
	Screen_t2718_CustomAttributesCacheGenerator_Screen_get_width_m3809,
	Screen_t2718_CustomAttributesCacheGenerator_Screen_get_height_m3824,
	Screen_t2718_CustomAttributesCacheGenerator_Screen_get_dpi_m3931,
	Screen_t2718_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4244,
	Screen_t2718_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4245,
	Screen_t2718_CustomAttributesCacheGenerator_Screen_get_orientation_m3823,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8953,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8954,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8958,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8958_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m6068,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m6142,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8959,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8959_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8959_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3849,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3848,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8960,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3850,
	RenderTexture_t2719_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8961,
	RenderTexture_t2719_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8962,
	GUILayer_t2722_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8966,
	Gradient_t2725_CustomAttributesCacheGenerator_Gradient_Init_m8970,
	Gradient_t2725_CustomAttributesCacheGenerator_Gradient_Cleanup_m8971,
	GUI_t719_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t719_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t719_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8978,
	GUI_t719_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8979,
	GUI_t719_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8980,
	GUI_t719_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8981,
	GUI_t719_CustomAttributesCacheGenerator_GUI_set_changed_m8983,
	GUI_t719_CustomAttributesCacheGenerator_GUI_get_enabled_m8984,
	GUI_t719_CustomAttributesCacheGenerator_GUI_set_enabled_m3842,
	GUI_t719_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8986,
	GUI_t719_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8989,
	GUI_t719_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8992,
	GUI_t719_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8999,
	GUI_t719_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m9006,
	GUI_t719_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m9008,
	GUI_t719_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m9015,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_Label_m3820_Arg1_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_Box_m3836_Arg1_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_Button_m3818_Arg1_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_TextField_m3821_Arg1_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_TextField_m4257_Arg2_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_Toggle_m3866_Arg2_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_SelectionGrid_m3864_Arg3_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_SelectionGrid_m9022_Arg4_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginHorizontal_m3819_Arg0_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginHorizontal_m9023_Arg2_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginVertical_m3833_Arg0_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginVertical_m9024_Arg2_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginScrollView_m3841_Arg1_ParameterInfo,
	GUILayout_t2728_CustomAttributesCacheGenerator_GUILayout_t2728_GUILayout_BeginScrollView_m9025_Arg6_ParameterInfo,
	GUILayoutUtility_t718_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m9040,
	GUILayoutUtility_t718_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m9042,
	GUILayoutUtility_t718_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m9043,
	GUILayoutUtility_t718_CustomAttributesCacheGenerator_GUILayoutUtility_t718_GUILayoutUtility_GetRect_m9046_Arg2_ParameterInfo,
	GUILayoutUtility_t718_CustomAttributesCacheGenerator_GUILayoutUtility_t718_GUILayoutUtility_GetRect_m9048_Arg3_ParameterInfo,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m9090,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m9094,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m9098,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m9099,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m9100,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m9101,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m9102,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m9103,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m9105,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m9107,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m9111,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m9112,
	GUIUtility_t2740_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m9113,
	GUIClip_t2741_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m9115,
	GUIClip_t2741_CustomAttributesCacheGenerator_GUIClip_Pop_m9116,
	GUISettings_t2742_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2742_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2742_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2742_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2742_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t794_CustomAttributesCacheGenerator,
	GUISkin_t794_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t794_CustomAttributesCacheGenerator_m_box,
	GUISkin_t794_CustomAttributesCacheGenerator_m_button,
	GUISkin_t794_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t794_CustomAttributesCacheGenerator_m_label,
	GUISkin_t794_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t794_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t794_CustomAttributesCacheGenerator_m_window,
	GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t794_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t794_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t794_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t794_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t794_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t794_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t794_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t794_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t794_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t794_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t796_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t796_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t796_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t739_CustomAttributesCacheGenerator_GUIStyleState_Init_m9185,
	GUIStyleState_t739_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9186,
	GUIStyleState_t739_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9187,
	GUIStyleState_t739_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9188,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_Init_m9191,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9192,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_left_m6330,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_set_left_m9193,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_right_m9194,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_set_right_m9195,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_top_m6331,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_set_top_m9196,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4268,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9197,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6324,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6325,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9199,
	RectOffset_t714_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9201,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9205,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9206,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9207,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9208,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9209,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9210,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9212,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9213,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9214,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3810,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9215,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3811,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9216,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9217,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9218,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3815,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9219,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3814,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9220,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3911,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3912,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9223,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9226,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9227_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9229,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9230,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9234,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9236,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9238,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9241,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9244,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9246,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6228,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6229,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg1_ParameterInfo,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg2_ParameterInfo,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg3_ParameterInfo,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg4_ParameterInfo,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg5_ParameterInfo,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_t963_TouchScreenKeyboard_Open_m9247_Arg6_ParameterInfo,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6169,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6170,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6227,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6168,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6226,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6181,
	TouchScreenKeyboard_t963_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6180,
	Event_t797_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t797_CustomAttributesCacheGenerator_Event_Init_m9248,
	Event_t797_CustomAttributesCacheGenerator_Event_Cleanup_m9250,
	Event_t797_CustomAttributesCacheGenerator_Event_get_rawType_m6194,
	Event_t797_CustomAttributesCacheGenerator_Event_get_type_m4265,
	Event_t797_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9251,
	Event_t797_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9253,
	Event_t797_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9255,
	Event_t797_CustomAttributesCacheGenerator_Event_get_modifiers_m6190,
	Event_t797_CustomAttributesCacheGenerator_Event_get_character_m6192,
	Event_t797_CustomAttributesCacheGenerator_Event_get_commandName_m9256,
	Event_t797_CustomAttributesCacheGenerator_Event_get_keyCode_m6191,
	Event_t797_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9257,
	Event_t797_CustomAttributesCacheGenerator_Event_Use_m9259,
	Event_t797_CustomAttributesCacheGenerator_Event_PopEvent_m6195,
	EventModifiers_t2751_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t538_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t769_CustomAttributesCacheGenerator,
	Quaternion_t802_CustomAttributesCacheGenerator,
	Quaternion_t802_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9284,
	Quaternion_t802_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9287,
	Quaternion_t802_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9289,
	Matrix4x4_t1100_CustomAttributesCacheGenerator,
	Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9305,
	Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9307,
	Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9309,
	Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9312,
	Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9324,
	Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9327,
	Matrix4x4_t1100_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9328,
	Bounds_t779_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9345,
	Bounds_t779_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9348,
	Bounds_t779_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9351,
	Bounds_t779_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9355,
	Vector4_t1059_CustomAttributesCacheGenerator,
	Mathf_t741_CustomAttributesCacheGenerator_Mathf_t741_Mathf_SmoothDamp_m6250_Arg4_ParameterInfo,
	Mathf_t741_CustomAttributesCacheGenerator_Mathf_t741_Mathf_SmoothDamp_m6250_Arg5_ParameterInfo,
	DrivenTransformProperties_t2753_CustomAttributesCacheGenerator,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9386,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9387,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9388,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9389,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9390,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9391,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9392,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9393,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9394,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9395,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9396,
	Resources_t804_CustomAttributesCacheGenerator_Resources_Load_m4291,
	TextAsset_t793_CustomAttributesCacheGenerator_TextAsset_get_text_m4248,
	SerializePrivateVariables_t2757_CustomAttributesCacheGenerator,
	Shader_t2758_CustomAttributesCacheGenerator_Shader_PropertyToID_m9404,
	Material_t526_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9407,
	Material_t526_CustomAttributesCacheGenerator_Material_SetTexture_m9409,
	Material_t526_CustomAttributesCacheGenerator_Material_GetTexture_m9411,
	Material_t526_CustomAttributesCacheGenerator_Material_SetFloat_m9413,
	Material_t526_CustomAttributesCacheGenerator_Material_HasProperty_m9414,
	Material_t526_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9415,
	Material_t526_CustomAttributesCacheGenerator_Material_t526_Material_Internal_CreateWithMaterial_m9415_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2759_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2759_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9418,
	SphericalHarmonicsL2_t2759_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9421,
	SphericalHarmonicsL2_t2759_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9424,
	Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_rect_m6121,
	Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m6117,
	Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_texture_m6114,
	Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_textureRect_m6139,
	Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_border_m6115,
	SpriteRenderer_t676_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9434,
	SpriteRenderer_t676_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9435,
	DataUtility_t2760_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m6127,
	DataUtility_t2760_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m6126,
	DataUtility_t2760_CustomAttributesCacheGenerator_DataUtility_GetPadding_m6120,
	DataUtility_t2760_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9436,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9439,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9440,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4344,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9441_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9442,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9445,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m4002,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9446,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7894,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7900,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3853,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9449_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3852,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9451_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9451_Arg3_ParameterInfo,
	WWWTranscoder_t2762_CustomAttributesCacheGenerator_WWWTranscoder_t2762_WWWTranscoder_URLEncode_m9455_Arg1_ParameterInfo,
	WWWTranscoder_t2762_CustomAttributesCacheGenerator_WWWTranscoder_t2762_WWWTranscoder_QPEncode_m9457_Arg1_ParameterInfo,
	WWWTranscoder_t2762_CustomAttributesCacheGenerator_WWWTranscoder_t2762_WWWTranscoder_SevenBitClean_m9460_Arg1_ParameterInfo,
	CacheIndex_t2763_CustomAttributesCacheGenerator,
	UnityString_t2764_CustomAttributesCacheGenerator_UnityString_t2764_UnityString_Format_m9462_Arg1_ParameterInfo,
	AsyncOperation_t2699_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9464,
	Application_t1529_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3903,
	Application_t1529_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9471,
	Application_t1529_CustomAttributesCacheGenerator_Application_get_isPlaying_m4288,
	Application_t1529_CustomAttributesCacheGenerator_Application_get_isEditor_m6232,
	Application_t1529_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4214,
	Application_t1529_CustomAttributesCacheGenerator_Application_get_platform_m3917,
	Application_t1529_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m7934,
	Application_t1529_CustomAttributesCacheGenerator_Application_t1529_Application_ExternalCall_m4215_Arg1_ParameterInfo,
	Application_t1529_CustomAttributesCacheGenerator_Application_t1529_Application_BuildInvocationForArguments_m9473_Arg1_ParameterInfo,
	Application_t1529_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9474,
	Application_t1529_CustomAttributesCacheGenerator_Application_get_unityVersion_m4292,
	Application_t1529_CustomAttributesCacheGenerator_Application_OpenURL_m4108,
	Application_t1529_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9476,
	Application_t1529_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1529_CustomAttributesCacheGenerator_Application_t1529____persistentDataPath_PropertyInfo,
	Behaviour_t1110_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5964,
	Behaviour_t1110_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6202,
	Behaviour_t1110_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5965,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m6018,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m6017,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m4504,
	Camera_t548_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4477,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_depth_m5930,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_cullingMask_m6030,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_eventMask_m9483,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9484,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9485,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9486,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9488,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9489,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9490,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9491,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9492,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9493,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_main_m4155,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9494,
	Camera_t548_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9495,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9500,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9502,
	CameraCallback_t2765_CustomAttributesCacheGenerator,
	Debug_t2766_CustomAttributesCacheGenerator_Debug_Internal_Log_m9503,
	Debug_t2766_CustomAttributesCacheGenerator_Debug_t2766_Debug_Internal_Log_m9503_Arg2_ParameterInfo,
	Debug_t2766_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9504,
	Debug_t2766_CustomAttributesCacheGenerator_Debug_t2766_Debug_Internal_LogException_m9504_Arg1_ParameterInfo,
	Debug_t2766_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4213,
	Display_t2769_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9529,
	Display_t2769_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9530,
	Display_t2769_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9531,
	Display_t2769_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9532,
	Display_t2769_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9533,
	Display_t2769_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9534,
	Display_t2769_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9535,
	Display_t2769_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9536,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4163,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4162,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9537,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9538,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9539,
	Input_t721_CustomAttributesCacheGenerator_Input_GetAxisRaw_m6009,
	Input_t721_CustomAttributesCacheGenerator_Input_GetButtonDown_m6008,
	Input_t721_CustomAttributesCacheGenerator_Input_GetMouseButton_m4372,
	Input_t721_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m4158,
	Input_t721_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4371,
	Input_t721_CustomAttributesCacheGenerator_Input_get_mousePosition_m4156,
	Input_t721_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5982,
	Input_t721_CustomAttributesCacheGenerator_Input_get_mousePresent_m6007,
	Input_t721_CustomAttributesCacheGenerator_Input_GetTouch_m3838,
	Input_t721_CustomAttributesCacheGenerator_Input_get_touchCount_m3837,
	Input_t721_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6230,
	Input_t721_CustomAttributesCacheGenerator_Input_get_compositionString_m6171,
	Input_t721_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9541,
	HideFlags_t2772_CustomAttributesCacheGenerator,
	Object_t717_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9543,
	Object_t717_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9545,
	Object_t717_CustomAttributesCacheGenerator_Object_Destroy_m9546,
	Object_t717_CustomAttributesCacheGenerator_Object_t717_Object_Destroy_m9546_Arg1_ParameterInfo,
	Object_t717_CustomAttributesCacheGenerator_Object_Destroy_m4048,
	Object_t717_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9547,
	Object_t717_CustomAttributesCacheGenerator_Object_t717_Object_DestroyImmediate_m9547_Arg1_ParameterInfo,
	Object_t717_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6231,
	Object_t717_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9548,
	Object_t717_CustomAttributesCacheGenerator_Object_get_name_m3905,
	Object_t717_CustomAttributesCacheGenerator_Object_set_name_m6291,
	Object_t717_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t717_CustomAttributesCacheGenerator_Object_set_hideFlags_m6205,
	Object_t717_CustomAttributesCacheGenerator_Object_ToString_m527,
	Object_t717_CustomAttributesCacheGenerator_Object_Instantiate_m4309,
	Object_t717_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9554,
	Component_t775_CustomAttributesCacheGenerator_Component_get_transform_m4184,
	Component_t775_CustomAttributesCacheGenerator_Component_get_gameObject_m3904,
	Component_t775_CustomAttributesCacheGenerator_Component_GetComponent_m6337,
	Component_t775_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9556,
	Component_t775_CustomAttributesCacheGenerator_Component_GetComponent_m10364,
	Component_t775_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9557,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9559,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9560,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10368,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9561,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9562,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4187,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6207,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6208,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m4104,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5966,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4487,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4368,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9563,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9563_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9563_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9564,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9565,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9566,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9566_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9571,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9572,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9573,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9574,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9575,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9576,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9577,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9578,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9579,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9580,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9581,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9582,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4310,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9583,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4456,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9584_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9585,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9586,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9587,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4469,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6206,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4311,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4468,
	Time_t2774_CustomAttributesCacheGenerator_Time_get_time_m4289,
	Time_t2774_CustomAttributesCacheGenerator_Time_get_deltaTime_m4295,
	Time_t2774_CustomAttributesCacheGenerator_Time_get_unscaledTime_m6011,
	Time_t2774_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m6042,
	Time_t2774_CustomAttributesCacheGenerator_Time_set_timeScale_m4109,
	Random_t2775_CustomAttributesCacheGenerator_Random_set_seed_m4396,
	Random_t2775_CustomAttributesCacheGenerator_Random_Range_m4343,
	Random_t2775_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9589,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m9592,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m9593,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9594,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m4452,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_t2777_PlayerPrefs_GetInt_m4452_Arg1_ParameterInfo,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m4450,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_t2777_PlayerPrefs_GetFloat_m4450_Arg1_ParameterInfo,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7889,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_t2777_PlayerPrefs_GetString_m7889_Arg1_ParameterInfo,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m4068,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m4067,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m4448,
	PlayerPrefs_t2777_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7892,
	LocalNotification_t2778_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9596,
	RemoteNotification_t2779_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9598,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9601,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9602,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9604,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9605,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9606,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9607,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9608,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9609,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9610,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9612,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9613,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9615,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9616,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9617,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9618,
	NotificationServices_t2781_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9619,
	Physics_t2783_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9637,
	Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_Raycast_m9638_Arg3_ParameterInfo,
	Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_Raycast_m9638_Arg4_ParameterInfo,
	Physics_t2783_CustomAttributesCacheGenerator_Physics_Raycast_m4159,
	Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_Raycast_m6094_Arg2_ParameterInfo,
	Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_Raycast_m6094_Arg3_ParameterInfo,
	Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_RaycastAll_m6032_Arg1_ParameterInfo,
	Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_RaycastAll_m6032_Arg2_ParameterInfo,
	Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_RaycastAll_m9639_Arg2_ParameterInfo,
	Physics_t2783_CustomAttributesCacheGenerator_Physics_t2783_Physics_RaycastAll_m9639_Arg3_ParameterInfo,
	Physics_t2783_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9640,
	Collider_t778_CustomAttributesCacheGenerator_Collider_set_enabled_m4171,
	Collider_t778_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9641,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4373,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_t810_Physics2D_IgnoreLayerCollision_m4373_Arg2_ParameterInfo,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9645,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_Raycast_m6095,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_t810_Physics2D_Raycast_m9646_Arg2_ParameterInfo,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_t810_Physics2D_Raycast_m9646_Arg3_ParameterInfo,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_t810_Physics2D_Raycast_m9646_Arg4_ParameterInfo,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_t810_Physics2D_Raycast_m9646_Arg5_ParameterInfo,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m6021,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9647,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4366,
	Physics2D_t810_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9648,
	Collider2D_t713_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4443,
	Collider2D_t713_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9650,
	CircleCollider2D_t622_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4442,
	CircleCollider2D_t622_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4441,
	AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_set_clip_m4147,
	AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_Play_m9666,
	AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_t613_AudioSource_Play_m9666_Arg0_ParameterInfo,
	AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_Play_m4435,
	AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4467,
	AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_Stop_m4148,
	AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_INTERNAL_CALL_Pause_m9667,
	AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4437,
	AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9668,
	AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_t613_AudioSource_PlayOneShot_m9668_Arg1_ParameterInfo,
	AudioSource_t613_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m4161,
	AnimationEvent_t2794_CustomAttributesCacheGenerator_AnimationEvent_t2794____data_PropertyInfo,
	AnimationCurve_t2798_CustomAttributesCacheGenerator,
	AnimationCurve_t2798_CustomAttributesCacheGenerator_AnimationCurve_t2798_AnimationCurve__ctor_m9694_Arg0_ParameterInfo,
	AnimationCurve_t2798_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9696,
	AnimationCurve_t2798_CustomAttributesCacheGenerator_AnimationCurve_Init_m9698,
	AnimatorStateInfo_t2795_CustomAttributesCacheGenerator_AnimatorStateInfo_t2795____nameHash_PropertyInfo,
	Animator_t1061_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6284,
	Animator_t1061_CustomAttributesCacheGenerator_Animator_StringToHash_m9717,
	Animator_t1061_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9718,
	Animator_t1061_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9719,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m4153,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m4154,
	CharacterInfo_t2804_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2804_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2804_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2804_CustomAttributesCacheGenerator_flipped,
	Font_t929_CustomAttributesCacheGenerator_Font_get_material_m6295,
	Font_t929_CustomAttributesCacheGenerator_Font_HasCharacter_m6193,
	Font_t929_CustomAttributesCacheGenerator_Font_get_dynamic_m6297,
	Font_t929_CustomAttributesCacheGenerator_Font_get_fontSize_m6298,
	FontTextureRebuildCallback_t2805_CustomAttributesCacheGenerator,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_Init_m9747,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9748,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9751,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6204,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9752,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9753,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9754,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9755,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9756,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9757,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6186,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9758,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9759,
	TextGenerator_t966_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6219,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_renderMode_m6091,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6312,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4354,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9770,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4501,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6315,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m6118,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6316,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m6078,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m6093,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m6092,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m6099,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m6065,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6294,
	CanvasGroup_t1082_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6277,
	CanvasGroup_t1082_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9772,
	CanvasGroup_t1082_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m6077,
	CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9775,
	CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m6081,
	CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6347,
	CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m6073,
	CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9776,
	CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9777,
	CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m6069,
	CanvasRenderer_t934_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m6066,
	RectTransformUtility_t1084_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9779,
	RectTransformUtility_t1084_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9781,
	RectTransformUtility_t1084_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m6080,
	Request_t2809_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2809_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2809_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2809_CustomAttributesCacheGenerator_Request_get_sourceId_m9786,
	Request_t2809_CustomAttributesCacheGenerator_Request_get_appId_m9787,
	Request_t2809_CustomAttributesCacheGenerator_Request_get_domain_m9788,
	Response_t2811_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2811_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2811_CustomAttributesCacheGenerator_Response_get_success_m9797,
	Response_t2811_CustomAttributesCacheGenerator_Response_set_success_m9798,
	Response_t2811_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9799,
	Response_t2811_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9800,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9805,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9806,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9807,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9808,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9809,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9810,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9811,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9812,
	CreateMatchRequest_t2814_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9813,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9816,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9817,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9818,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9819,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9820,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9821,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9822,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9823,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9824,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9825,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9826,
	CreateMatchResponse_t2815_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9827,
	JoinMatchRequest_t2816_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2816_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2816_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9831,
	JoinMatchRequest_t2816_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9832,
	JoinMatchRequest_t2816_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9833,
	JoinMatchRequest_t2816_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9834,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9837,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9838,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9839,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9840,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9841,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9842,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9843,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9844,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9845,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9846,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9847,
	JoinMatchResponse_t2817_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9848,
	DestroyMatchRequest_t2818_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2818_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9852,
	DestroyMatchRequest_t2818_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9853,
	DropConnectionRequest_t2819_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2819_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2819_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9856,
	DropConnectionRequest_t2819_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9857,
	DropConnectionRequest_t2819_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9858,
	DropConnectionRequest_t2819_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9859,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9862,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9863,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9864,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9865,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9866,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9867,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9868,
	ListMatchRequest_t2820_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9869,
	MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9872,
	MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9873,
	MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9874,
	MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9875,
	MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9876,
	MatchDirectConnectInfo_t2821_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9877,
	MatchDesc_t2823_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2823_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2823_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2823_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2823_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2823_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2823_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2823_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2823_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9881,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9882,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_name_m9883,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_name_m9884,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9885,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9886,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9887,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9888,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9889,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9890,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9891,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9892,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9893,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9894,
	MatchDesc_t2823_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9895,
	ListMatchResponse_t2825_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2825_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9899,
	ListMatchResponse_t2825_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9900,
	AppID_t2826_CustomAttributesCacheGenerator,
	SourceID_t2827_CustomAttributesCacheGenerator,
	NetworkID_t2828_CustomAttributesCacheGenerator,
	NodeID_t2829_CustomAttributesCacheGenerator,
	NetworkMatch_t2834_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10380,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2985_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2985_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10386,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2985_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10387,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2985_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10389,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2985_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10390,
	JsonArray_t2835_CustomAttributesCacheGenerator,
	JsonObject_t2836_CustomAttributesCacheGenerator,
	SimpleJson_t2839_CustomAttributesCacheGenerator,
	SimpleJson_t2839_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9945,
	SimpleJson_t2839_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9957,
	SimpleJson_t2839_CustomAttributesCacheGenerator_SimpleJson_t2839____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2837_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2837_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10394,
	PocoJsonSerializerStrategy_t2838_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2838_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9974,
	PocoJsonSerializerStrategy_t2838_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9975,
	ReflectionUtils_t2851_CustomAttributesCacheGenerator,
	ReflectionUtils_t2851_CustomAttributesCacheGenerator_ReflectionUtils_t2851_ReflectionUtils_GetConstructorInfo_m10000_Arg1_ParameterInfo,
	ReflectionUtils_t2851_CustomAttributesCacheGenerator_ReflectionUtils_t2851_ReflectionUtils_GetContructor_m10005_Arg1_ParameterInfo,
	ReflectionUtils_t2851_CustomAttributesCacheGenerator_ReflectionUtils_t2851_ReflectionUtils_GetConstructorByReflection_m10007_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2988_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2845_CustomAttributesCacheGenerator_ConstructorDelegate_t2845_ConstructorDelegate_Invoke_m9985_Arg0_ParameterInfo,
	ConstructorDelegate_t2845_CustomAttributesCacheGenerator_ConstructorDelegate_t2845_ConstructorDelegate_BeginInvoke_m9986_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2846_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2847_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2848_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2849_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2850_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2853_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1131_CustomAttributesCacheGenerator,
	RequireComponent_t823_CustomAttributesCacheGenerator,
	WritableAttribute_t2859_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2860_CustomAttributesCacheGenerator,
	GUIStateObjects_t2871_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m10040,
	Achievement_t2874_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2874_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2874_CustomAttributesCacheGenerator_Achievement_get_id_m10062,
	Achievement_t2874_CustomAttributesCacheGenerator_Achievement_set_id_m10063,
	Achievement_t2874_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m10064,
	Achievement_t2874_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m10065,
	AchievementDescription_t2875_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2875_CustomAttributesCacheGenerator_AchievementDescription_get_id_m10072,
	AchievementDescription_t2875_CustomAttributesCacheGenerator_AchievementDescription_set_id_m10073,
	Score_t2876_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2876_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2876_CustomAttributesCacheGenerator_Score_get_leaderboardID_m10082,
	Score_t2876_CustomAttributesCacheGenerator_Score_set_leaderboardID_m10083,
	Score_t2876_CustomAttributesCacheGenerator_Score_get_value_m10084,
	Score_t2876_CustomAttributesCacheGenerator_Score_set_value_m10085,
	Leaderboard_t2715_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2715_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2715_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2715_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_get_id_m10093,
	Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_set_id_m10094,
	Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m10095,
	Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m10096,
	Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_get_range_m10097,
	Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_set_range_m10098,
	Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m10099,
	Leaderboard_t2715_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m10100,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1134_CustomAttributesCacheGenerator,
	SpaceAttribute_t1132_CustomAttributesCacheGenerator,
	RangeAttribute_t1130_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1135_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1133_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m10144,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m10146,
	SharedBetweenAnimatorsAttribute_t2892_CustomAttributesCacheGenerator,
	ArgumentCache_t2899_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2899_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2899_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2899_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2899_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2899_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2903_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2903_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2903_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2903_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2903_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2905_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2908_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2908_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2909_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2910_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2911_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1125_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2913_CustomAttributesCacheGenerator,
};
