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
extern TypeInfo* InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t751_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3290);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t751 * tmp;
		tmp = (ExtensionAttribute_t751 *)il2cpp_codegen_object_new (ExtensionAttribute_t751_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4097(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2632_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2632_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9829(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9829(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void LayerMask_t840_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void LayerMask_t840_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void LayerMask_t840_CustomAttributesCacheGenerator_LayerMask_t840_LayerMask_GetMask_m8451_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void RuntimePlatform_t2638_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void RuntimePlatform_t2638_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Coroutine_t895_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8457_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9624(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MeshFilter_t742_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_t481_Mesh_Internal_Create_m8531_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9624(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_vertices_m3944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_triangles_m3945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t565_CustomAttributesCacheGenerator_Renderer_set_enabled_m3795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t565_CustomAttributesCacheGenerator_Renderer_get_material_m3774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t565_CustomAttributesCacheGenerator_Renderer_set_material_m3776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t565_CustomAttributesCacheGenerator_Renderer_set_materials_m4044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t565_CustomAttributesCacheGenerator_Renderer_get_bounds_m3804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t565_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t565_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_get_width_m3434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_get_height_m3449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_get_dpi_m3556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_get_orientation_m3448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8558_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9624(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8559_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8559_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RenderTexture_t2654_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RenderTexture_t2654_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUILayer_t2657_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Gradient_t2660_CustomAttributesCacheGenerator_Gradient_Init_m8570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Gradient_t2660_CustomAttributesCacheGenerator_Gradient_Cleanup_m8571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_set_changed_m8583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_get_enabled_m8584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_set_enabled_m3467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t657_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Label_m3445_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Box_m3461_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Button_m3443_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_TextField_m3446_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_TextField_m3882_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Toggle_m3491_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_SelectionGrid_m3489_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_SelectionGrid_m8622_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginHorizontal_m3444_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginHorizontal_m8623_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginVertical_m3458_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginVertical_m8624_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginScrollView_m3466_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginScrollView_m8625_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUILayoutUtility_t656_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUILayoutUtility_t656_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void GUILayoutUtility_t656_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9960(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayoutUtility_t656_CustomAttributesCacheGenerator_GUILayoutUtility_t656_GUILayoutUtility_GetRect_m8646_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void GUILayoutUtility_t656_CustomAttributesCacheGenerator_GUILayoutUtility_t656_GUILayoutUtility_GetRect_m8648_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIClip_t2676_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIClip_t2676_CustomAttributesCacheGenerator_GUIClip_Pop_m8716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISettings_t2677_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISettings_t2677_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISettings_t2677_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISettings_t2677_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISettings_t2677_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t1058_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t1058_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t1058 * tmp;
		tmp = (ExecuteInEditMode_t1058 *)il2cpp_codegen_object_new (ExecuteInEditMode_t1058_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m6016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUISkin_t733_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUIContent_t735_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUIContent_t735_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void GUIContent_t735_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyleState_t678_CustomAttributesCacheGenerator_GUIStyleState_Init_m8785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyleState_t678_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyleState_t678_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyleState_t678_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_Init_m8791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_left_m5924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_set_left_m8793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_right_m8794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_set_right_m8795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_top_m5925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_set_top_m8796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3537(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8827_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_Init_m8848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_Cleanup_m8850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_get_rawType_m5784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_get_type_m3890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_get_modifiers_m5780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_get_character_m5782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_get_commandName_m8856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_get_keyCode_m5781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_Use_m8859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t736_CustomAttributesCacheGenerator_Event_PopEvent_m5785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1048_il2cpp_TypeInfo_var;
void EventModifiers_t2686_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1048 * tmp;
		tmp = (FlagsAttribute_t1048 *)il2cpp_codegen_object_new (FlagsAttribute_t1048_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5961(tmp, NULL);
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2788_il2cpp_TypeInfo_var;
void Color32_t708_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4472);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2788 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2788 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2788_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m9616(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t737_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Quaternion_t737_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Quaternion_t737_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Quaternion_t737_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Bounds_t718_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Bounds_t718_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Bounds_t718_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Bounds_t718_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t987_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Mathf_t680_CustomAttributesCacheGenerator_Mathf_t680_Mathf_SmoothDamp_m5843_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Mathf_t680_CustomAttributesCacheGenerator_Mathf_t680_Mathf_SmoothDamp_m5843_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1048_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2688_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1048 * tmp;
		tmp = (FlagsAttribute_t1048 *)il2cpp_codegen_object_new (FlagsAttribute_t1048_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5961(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8990(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void Resources_t740_CustomAttributesCacheGenerator_Resources_Load_m9003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9829(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextAsset_t732_CustomAttributesCacheGenerator_TextAsset_get_text_m3873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2692_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Shader_t2693_CustomAttributesCacheGenerator_Shader_PropertyToID_m9006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_SetTexture_m9011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_GetTexture_m9013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_SetFloat_m9015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_HasProperty_m9016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_t482_Material_Internal_CreateWithMaterial_m9017_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9624(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_rect_m5711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_texture_m5704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_border_m5705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SpriteRenderer_t614_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SpriteRenderer_t614_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9043_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9051_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9053_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9053_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_URLEncode_m9057_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_QPEncode_m9059_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_SevenBitClean_m9062_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void CacheIndex_t2698_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void UnityString_t2699_CustomAttributesCacheGenerator_UnityString_t2699_UnityString_Format_m9064_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AsyncOperation_t2633_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_isPlaying_m5823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_isEditor_m5825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_platform_m3542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_t1463_Application_ExternalCall_m3840_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_t1463_Application_BuildInvocationForArguments_m9075_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_OpenURL_m3733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2916_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_t1463____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2916 * tmp;
		tmp = (SecurityCriticalAttribute_t2916 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2916_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m9964(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_get_enabled_m4025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_depth_m5519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_eventMask_m9085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_main_m3780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var;
void CameraCallback_t2700_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2146 * tmp;
		tmp = (EditorBrowsableAttribute_t2146 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7897(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Debug_t2701_CustomAttributesCacheGenerator_Debug_Internal_Log_m9105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void Debug_t2701_CustomAttributesCacheGenerator_Debug_t2701_Debug_Internal_Log_m9105_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9624(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Debug_t2701_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void Debug_t2701_CustomAttributesCacheGenerator_Debug_t2701_Debug_Internal_LogException_m9106_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9624(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Debug_t2701_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_GetAxis_m4084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_GetButtonDown_m5597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_GetMouseButton_m3988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_get_mousePosition_m3781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_get_mousePresent_m5596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_GetTouch_m3463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_get_touchCount_m3462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_get_compositionString_m5762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t659_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1048_il2cpp_TypeInfo_var;
void HideFlags_t2707_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1048 * tmp;
		tmp = (FlagsAttribute_t1048 *)il2cpp_codegen_object_new (FlagsAttribute_t1048_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5961(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_Destroy_m9148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_t655_Object_Destroy_m9148_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_Destroy_m3673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_t655_Object_DestroyImmediate_m9149_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9829(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_get_name_m3530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_set_name_m5885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_set_hideFlags_m5796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_ToString_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_Instantiate_m3914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9829(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void Object_t655_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9829(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Component_t714_CustomAttributesCacheGenerator_Component_get_transform_m3809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Component_t714_CustomAttributesCacheGenerator_Component_get_gameObject_m3529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void Component_t714_CustomAttributesCacheGenerator_Component_GetComponent_m5931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9829(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Component_t714_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void Component_t714_CustomAttributesCacheGenerator_Component_GetComponent_m9967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9960(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Component_t714_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9829(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9960(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9829(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9165_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9165_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9829(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9168_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9624(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9186_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_get_time_m3935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_get_deltaTime_m3957(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_set_timeScale_m3734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m3971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Random_t2710_CustomAttributesCacheGenerator_Random_set_seed_m4011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Random_t2710_CustomAttributesCacheGenerator_Random_Range_m3955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Random_t2710_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_t2712_PlayerPrefs_GetString_m7488_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void LocalNotification_t2713_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RemoteNotification_t2714_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m9237_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m9237_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_Raycast_m3784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m5684_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m5684_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m5622_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m5622_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m9238_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m9238_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Collider_t717_CustomAttributesCacheGenerator_Collider_set_enabled_m3796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Collider_t717_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9240(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_t746_Physics2D_IgnoreLayerCollision_m3989_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_Raycast_m5685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_t746_Physics2D_Raycast_m9245_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_t746_Physics2D_Raycast_m9245_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_t746_Physics2D_Raycast_m9245_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_t746_Physics2D_Raycast_m9245_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5610(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9246(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9247(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Collider2D_t579_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Collider2D_t579_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9249(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_set_clip_m3772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_Play_m9265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_t571_AudioSource_Play_m9265_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_Play_m4046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_Stop_m3773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_t571_AudioSource_PlayOneShot_m9266_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9824(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9828(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void AnimationEvent_t2729_CustomAttributesCacheGenerator_AnimationEvent_t2729____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void AnimationCurve_t2733_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_t2733_AnimationCurve__ctor_m9292_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_Init_m9296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2730_CustomAttributesCacheGenerator_AnimatorStateInfo_t2730____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Animator_t622_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Animator_t622_CustomAttributesCacheGenerator_Animator_StringToHash_m9315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Animator_t622_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Animator_t622_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Animator_t622_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void CharacterInfo_t2739_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void CharacterInfo_t2739_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void CharacterInfo_t2739_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t755_il2cpp_TypeInfo_var;
void CharacterInfo_t2739_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t755 * tmp;
		tmp = (ObsoleteAttribute_t755 *)il2cpp_codegen_object_new (ObsoleteAttribute_t755_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4204(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Font_t855_CustomAttributesCacheGenerator_Font_get_material_m5889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Font_t855_CustomAttributesCacheGenerator_Font_HasCharacter_m5783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Font_t855_CustomAttributesCacheGenerator_Font_get_dynamic_m5891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Font_t855_CustomAttributesCacheGenerator_Font_get_fontSize_m5892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2740_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2146 * tmp;
		tmp = (EditorBrowsableAttribute_t2146 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7897(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_Init_m9346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t630_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasGroup_t601_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m4067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasGroup_t601_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasGroup_t601_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasGroup_t601_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5659(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9615(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2744_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2744_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2744_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2744_CustomAttributesCacheGenerator_Request_get_sourceId_m9385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2744_CustomAttributesCacheGenerator_Request_get_appId_m9386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2744_CustomAttributesCacheGenerator_Request_get_domain_m9387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2746_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2746_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2746_CustomAttributesCacheGenerator_Response_get_success_m9396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2746_CustomAttributesCacheGenerator_Response_set_success_m9397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2746_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2746_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2751_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2751_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2753_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2753_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2753_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2754_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2754_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_name_m9482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_name_m9483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2760_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2760_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9498(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2760_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t2918_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2761_il2cpp_TypeInfo_var;
void AppID_t2761_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4474);
		AppID_t2761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4375);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2918 * tmp;
		tmp = (DefaultValueAttribute_t2918 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2918_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9982(tmp, Box(AppID_t2761_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2918_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2762_il2cpp_TypeInfo_var;
void SourceID_t2762_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4474);
		SourceID_t2762_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4374);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2918 * tmp;
		tmp = (DefaultValueAttribute_t2918 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2918_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9982(tmp, Box(SourceID_t2762_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2918_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2763_il2cpp_TypeInfo_var;
void NetworkID_t2763_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4474);
		NetworkID_t2763_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4377);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2918 * tmp;
		tmp = (DefaultValueAttribute_t2918 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2918_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9982(tmp, Box(NetworkID_t2763_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2918_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2764_il2cpp_TypeInfo_var;
void NodeID_t2764_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4474);
		NodeID_t2764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4378);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2918 * tmp;
		tmp = (DefaultValueAttribute_t2918 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2918_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9982(tmp, Box(NodeID_t2764_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2769_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9983(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9989(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9990(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9992(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9993(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var;
void JsonArray_t2770_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4475);
		EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9994(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2146 * tmp;
		tmp = (EditorBrowsableAttribute_t2146 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7897(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var;
void JsonObject_t2771_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3294);
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4475);
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
		EditorBrowsableAttribute_t2146 * tmp;
		tmp = (EditorBrowsableAttribute_t2146 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7897(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9994(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var;
void SimpleJson_t2774_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4475);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9994(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var;
void SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4476);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2922 * tmp;
		tmp = (SuppressMessageAttribute_t2922 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9995(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9996(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var;
void SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4476);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2922 * tmp;
		tmp = (SuppressMessageAttribute_t2922 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9995(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var;
void SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_t2774____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2146 * tmp;
		tmp = (EditorBrowsableAttribute_t2146 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7897(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4475);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9994(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4476);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2922 * tmp;
		tmp = (SuppressMessageAttribute_t2922 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9995(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9996(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4475);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9994(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4476);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2922 * tmp;
		tmp = (SuppressMessageAttribute_t2922 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9995(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9996(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4476);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2922 * tmp;
		tmp = (SuppressMessageAttribute_t2922 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9995(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9996(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var;
void ReflectionUtils_t2786_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4475);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9994(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetConstructorInfo_m9599_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetContructor_m9604_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetConstructorByReflection_m9606_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2923_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2780_CustomAttributesCacheGenerator_ConstructorDelegate_t2780_ConstructorDelegate_Invoke_m9584_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t752_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2780_CustomAttributesCacheGenerator_ConstructorDelegate_t2780_ConstructorDelegate_BeginInvoke_m9585_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t752 * tmp;
		tmp = (ParamArrayAttribute_t752 *)il2cpp_codegen_object_new (ParamArrayAttribute_t752_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2781_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2782_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2783_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2784_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2785_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2788_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1059_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7759(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void RequireComponent_t1053_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7760(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void WritableAttribute_t2794_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7760(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2795_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void GUIStateObjects_t2806_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9960(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2809_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2809_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2809_CustomAttributesCacheGenerator_Achievement_get_id_m9661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2809_CustomAttributesCacheGenerator_Achievement_set_id_m9662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2809_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2809_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2810_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2810_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2810_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2811_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2811_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2811_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2811_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2811_CustomAttributesCacheGenerator_Score_get_value_m9683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2811_CustomAttributesCacheGenerator_Score_set_value_m9684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_id_m9692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_id_m9693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_range_m9696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_range_m9697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7759(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7760(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void TooltipAttribute_t1062_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7759(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7760(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void SpaceAttribute_t1060_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7759(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7760(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void RangeAttribute_t1057_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7759(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7760(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1063_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7759(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7760(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1061_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7759(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7760(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9960(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9960(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9960(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2827_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7760(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
void PersistentCall_t2838_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void PersistentCall_t2838_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void PersistentCall_t2838_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
void PersistentCall_t2838_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void PersistentCall_t2838_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2840_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void UnityEventBase_t2843_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1833);
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5980(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t753_il2cpp_TypeInfo_var;
void UnityEventBase_t2843_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t753 * tmp;
		tmp = (SerializeField_t753 *)il2cpp_codegen_object_new (SerializeField_t753_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t1050_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2844_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1832);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1050 * tmp;
		tmp = (AddComponentMenu_t1050 *)il2cpp_codegen_object_new (AddComponentMenu_t1050_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m5979(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2845_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2846_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1051_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7760(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m7759(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t756_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2848_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t756 * tmp;
		tmp = (AttributeUsageAttribute_t756 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t756_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4234(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[816] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2632_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8439,
	AssetBundleCreateRequest_t2632_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8440,
	AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8444,
	AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8445,
	AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8446,
	LayerMask_t840_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8449,
	LayerMask_t840_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8450,
	LayerMask_t840_CustomAttributesCacheGenerator_LayerMask_t840_LayerMask_GetMask_m8451_Arg0_ParameterInfo,
	RuntimePlatform_t2638_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t2638_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4092,
	SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8452,
	SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7535,
	Coroutine_t895_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8455,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8457,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8457_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8458,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8460,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8465,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8466,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8467,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8468,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8469,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8470,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8471,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8472,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8473,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8474,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8475,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8476,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8477,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8478,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8479,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8480,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8481,
	GameCenterPlatform_t750_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8483,
	GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8527,
	GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8528,
	GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8529,
	GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8530,
	MeshFilter_t742_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3943,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8531,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_t481_Mesh_Internal_Create_m8531_Arg0_ParameterInfo,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_vertices_m3944,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_triangles_m3945,
	Renderer_t565_CustomAttributesCacheGenerator_Renderer_set_enabled_m3795,
	Renderer_t565_CustomAttributesCacheGenerator_Renderer_get_material_m3774,
	Renderer_t565_CustomAttributesCacheGenerator_Renderer_set_material_m3776,
	Renderer_t565_CustomAttributesCacheGenerator_Renderer_set_materials_m4044,
	Renderer_t565_CustomAttributesCacheGenerator_Renderer_get_bounds_m3804,
	Renderer_t565_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5616,
	Renderer_t565_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5617,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_get_width_m3434,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_get_height_m3449,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_get_dpi_m3556,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3869,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3870,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_get_orientation_m3448,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8553,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8554,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8558,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8558_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5658,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5733,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8559,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8559_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8559_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3474,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3473,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8560,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3475,
	RenderTexture_t2654_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8561,
	RenderTexture_t2654_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8562,
	GUILayer_t2657_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8566,
	Gradient_t2660_CustomAttributesCacheGenerator_Gradient_Init_m8570,
	Gradient_t2660_CustomAttributesCacheGenerator_Gradient_Cleanup_m8571,
	GUI_t657_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t657_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t657_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8578,
	GUI_t657_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8579,
	GUI_t657_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8580,
	GUI_t657_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8581,
	GUI_t657_CustomAttributesCacheGenerator_GUI_set_changed_m8583,
	GUI_t657_CustomAttributesCacheGenerator_GUI_get_enabled_m8584,
	GUI_t657_CustomAttributesCacheGenerator_GUI_set_enabled_m3467,
	GUI_t657_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8586,
	GUI_t657_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8589,
	GUI_t657_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8592,
	GUI_t657_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8599,
	GUI_t657_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8606,
	GUI_t657_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8608,
	GUI_t657_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8615,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Label_m3445_Arg1_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Box_m3461_Arg1_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Button_m3443_Arg1_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_TextField_m3446_Arg1_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_TextField_m3882_Arg2_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Toggle_m3491_Arg2_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_SelectionGrid_m3489_Arg3_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_SelectionGrid_m8622_Arg4_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginHorizontal_m3444_Arg0_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginHorizontal_m8623_Arg2_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginVertical_m3458_Arg0_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginVertical_m8624_Arg2_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginScrollView_m3466_Arg1_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginScrollView_m8625_Arg6_ParameterInfo,
	GUILayoutUtility_t656_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8640,
	GUILayoutUtility_t656_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8642,
	GUILayoutUtility_t656_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8643,
	GUILayoutUtility_t656_CustomAttributesCacheGenerator_GUILayoutUtility_t656_GUILayoutUtility_GetRect_m8646_Arg2_ParameterInfo,
	GUILayoutUtility_t656_CustomAttributesCacheGenerator_GUILayoutUtility_t656_GUILayoutUtility_GetRect_m8648_Arg3_ParameterInfo,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8690,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8694,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8698,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8699,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8700,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8701,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8702,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8703,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8705,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8707,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8711,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8712,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8713,
	GUIClip_t2676_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8715,
	GUIClip_t2676_CustomAttributesCacheGenerator_GUIClip_Pop_m8716,
	GUISettings_t2677_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2677_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2677_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2677_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2677_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t733_CustomAttributesCacheGenerator,
	GUISkin_t733_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t733_CustomAttributesCacheGenerator_m_box,
	GUISkin_t733_CustomAttributesCacheGenerator_m_button,
	GUISkin_t733_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t733_CustomAttributesCacheGenerator_m_label,
	GUISkin_t733_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t733_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t733_CustomAttributesCacheGenerator_m_window,
	GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t733_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t733_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t733_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t733_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t733_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t733_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t733_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t733_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t733_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t733_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t735_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t735_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t735_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t678_CustomAttributesCacheGenerator_GUIStyleState_Init_m8785,
	GUIStyleState_t678_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8786,
	GUIStyleState_t678_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8787,
	GUIStyleState_t678_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8788,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_Init_m8791,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8792,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_left_m5924,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_set_left_m8793,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_right_m8794,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_set_right_m8795,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_top_m5925,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_set_top_m8796,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3893,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8797,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5918,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5919,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8799,
	RectOffset_t652_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8801,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8805,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8806,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8807,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8808,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8809,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8810,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8812,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8813,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8814,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3435,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8815,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3436,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8816,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8817,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8818,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3440,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8819,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3439,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8820,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3536,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3537,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8823,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8826,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8827_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8829,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8830,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8834,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8836,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8838,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8841,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8844,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8846,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5820,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5821,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg1_ParameterInfo,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg2_ParameterInfo,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg3_ParameterInfo,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg4_ParameterInfo,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg5_ParameterInfo,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_t890_TouchScreenKeyboard_Open_m8847_Arg6_ParameterInfo,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5760,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5761,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5819,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5759,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5818,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5771,
	TouchScreenKeyboard_t890_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5770,
	Event_t736_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t736_CustomAttributesCacheGenerator_Event_Init_m8848,
	Event_t736_CustomAttributesCacheGenerator_Event_Cleanup_m8850,
	Event_t736_CustomAttributesCacheGenerator_Event_get_rawType_m5784,
	Event_t736_CustomAttributesCacheGenerator_Event_get_type_m3890,
	Event_t736_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8851,
	Event_t736_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8853,
	Event_t736_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8855,
	Event_t736_CustomAttributesCacheGenerator_Event_get_modifiers_m5780,
	Event_t736_CustomAttributesCacheGenerator_Event_get_character_m5782,
	Event_t736_CustomAttributesCacheGenerator_Event_get_commandName_m8856,
	Event_t736_CustomAttributesCacheGenerator_Event_get_keyCode_m5781,
	Event_t736_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8857,
	Event_t736_CustomAttributesCacheGenerator_Event_Use_m8859,
	Event_t736_CustomAttributesCacheGenerator_Event_PopEvent_m5785,
	EventModifiers_t2686_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t496_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t708_CustomAttributesCacheGenerator,
	Quaternion_t737_CustomAttributesCacheGenerator,
	Quaternion_t737_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8885,
	Quaternion_t737_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8888,
	Quaternion_t737_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8890,
	Matrix4x4_t1026_CustomAttributesCacheGenerator,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8906,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8908,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8910,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8913,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8925,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8928,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8929,
	Bounds_t718_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8946,
	Bounds_t718_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8949,
	Bounds_t718_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8952,
	Bounds_t718_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8956,
	Vector4_t987_CustomAttributesCacheGenerator,
	Mathf_t680_CustomAttributesCacheGenerator_Mathf_t680_Mathf_SmoothDamp_m5843_Arg4_ParameterInfo,
	Mathf_t680_CustomAttributesCacheGenerator_Mathf_t680_Mathf_SmoothDamp_m5843_Arg5_ParameterInfo,
	DrivenTransformProperties_t2688_CustomAttributesCacheGenerator,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8987,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8988,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8989,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8990,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8991,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8992,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8993,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8994,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8995,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8996,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8997,
	Resources_t740_CustomAttributesCacheGenerator_Resources_Load_m9003,
	TextAsset_t732_CustomAttributesCacheGenerator_TextAsset_get_text_m3873,
	SerializePrivateVariables_t2692_CustomAttributesCacheGenerator,
	Shader_t2693_CustomAttributesCacheGenerator_Shader_PropertyToID_m9006,
	Material_t482_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9009,
	Material_t482_CustomAttributesCacheGenerator_Material_SetTexture_m9011,
	Material_t482_CustomAttributesCacheGenerator_Material_GetTexture_m9013,
	Material_t482_CustomAttributesCacheGenerator_Material_SetFloat_m9015,
	Material_t482_CustomAttributesCacheGenerator_Material_HasProperty_m9016,
	Material_t482_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9017,
	Material_t482_CustomAttributesCacheGenerator_Material_t482_Material_Internal_CreateWithMaterial_m9017_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9020,
	SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9023,
	SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9026,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_rect_m5711,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5707,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_texture_m5704,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5730,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_border_m5705,
	SpriteRenderer_t614_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9036,
	SpriteRenderer_t614_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9037,
	DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5718,
	DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5717,
	DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5710,
	DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9038,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9041,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9042,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3956,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9043_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9044,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9047,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3627,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9048,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7493,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7499,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3478,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9051_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3477,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9053_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9053_Arg3_ParameterInfo,
	WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_URLEncode_m9057_Arg1_ParameterInfo,
	WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_QPEncode_m9059_Arg1_ParameterInfo,
	WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_SevenBitClean_m9062_Arg1_ParameterInfo,
	CacheIndex_t2698_CustomAttributesCacheGenerator,
	UnityString_t2699_CustomAttributesCacheGenerator_UnityString_t2699_UnityString_Format_m9064_Arg1_ParameterInfo,
	AsyncOperation_t2633_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9066,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3528,
	Application_t1463_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9073,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_isPlaying_m5823,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_isEditor_m5825,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3839,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_platform_m3542,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4053,
	Application_t1463_CustomAttributesCacheGenerator_Application_t1463_Application_ExternalCall_m3840_Arg1_ParameterInfo,
	Application_t1463_CustomAttributesCacheGenerator_Application_t1463_Application_BuildInvocationForArguments_m9075_Arg1_ParameterInfo,
	Application_t1463_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9076,
	Application_t1463_CustomAttributesCacheGenerator_Application_OpenURL_m3733,
	Application_t1463_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9078,
	Application_t1463_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1463_CustomAttributesCacheGenerator_Application_t1463____persistentDataPath_PropertyInfo,
	Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_get_enabled_m4025,
	Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5793,
	Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5554,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5607,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5606,
	Camera_t532_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4071,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_depth_m5519,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5620,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_eventMask_m9085,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9086,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9087,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9088,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9090,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9091,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9092,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9093,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9094,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9095,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_main_m3780,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9096,
	Camera_t532_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9097,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9102,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9104,
	CameraCallback_t2700_CustomAttributesCacheGenerator,
	Debug_t2701_CustomAttributesCacheGenerator_Debug_Internal_Log_m9105,
	Debug_t2701_CustomAttributesCacheGenerator_Debug_t2701_Debug_Internal_Log_m9105_Arg2_ParameterInfo,
	Debug_t2701_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9106,
	Debug_t2701_CustomAttributesCacheGenerator_Debug_t2701_Debug_Internal_LogException_m9106_Arg1_ParameterInfo,
	Debug_t2701_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3838,
	Display_t2704_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9131,
	Display_t2704_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9132,
	Display_t2704_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9133,
	Display_t2704_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9134,
	Display_t2704_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9135,
	Display_t2704_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9136,
	Display_t2704_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9137,
	Display_t2704_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9138,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3788,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3787,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9139,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9140,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9141,
	Input_t659_CustomAttributesCacheGenerator_Input_GetAxis_m4084,
	Input_t659_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5598,
	Input_t659_CustomAttributesCacheGenerator_Input_GetButtonDown_m5597,
	Input_t659_CustomAttributesCacheGenerator_Input_GetMouseButton_m3988,
	Input_t659_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3783,
	Input_t659_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3987,
	Input_t659_CustomAttributesCacheGenerator_Input_get_mousePosition_m3781,
	Input_t659_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5571,
	Input_t659_CustomAttributesCacheGenerator_Input_get_mousePresent_m5596,
	Input_t659_CustomAttributesCacheGenerator_Input_GetTouch_m3463,
	Input_t659_CustomAttributesCacheGenerator_Input_get_touchCount_m3462,
	Input_t659_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5822,
	Input_t659_CustomAttributesCacheGenerator_Input_get_compositionString_m5762,
	Input_t659_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9143,
	HideFlags_t2707_CustomAttributesCacheGenerator,
	Object_t655_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9145,
	Object_t655_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9147,
	Object_t655_CustomAttributesCacheGenerator_Object_Destroy_m9148,
	Object_t655_CustomAttributesCacheGenerator_Object_t655_Object_Destroy_m9148_Arg1_ParameterInfo,
	Object_t655_CustomAttributesCacheGenerator_Object_Destroy_m3673,
	Object_t655_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9149,
	Object_t655_CustomAttributesCacheGenerator_Object_t655_Object_DestroyImmediate_m9149_Arg1_ParameterInfo,
	Object_t655_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5824,
	Object_t655_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9150,
	Object_t655_CustomAttributesCacheGenerator_Object_get_name_m3530,
	Object_t655_CustomAttributesCacheGenerator_Object_set_name_m5885,
	Object_t655_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t655_CustomAttributesCacheGenerator_Object_set_hideFlags_m5796,
	Object_t655_CustomAttributesCacheGenerator_Object_ToString_m525,
	Object_t655_CustomAttributesCacheGenerator_Object_Instantiate_m3914,
	Object_t655_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9156,
	Component_t714_CustomAttributesCacheGenerator_Component_get_transform_m3809,
	Component_t714_CustomAttributesCacheGenerator_Component_get_gameObject_m3529,
	Component_t714_CustomAttributesCacheGenerator_Component_GetComponent_m5931,
	Component_t714_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9158,
	Component_t714_CustomAttributesCacheGenerator_Component_GetComponent_m9967,
	Component_t714_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9159,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9161,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9162,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9971,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9163,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9164,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3812,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5798,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5799,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3729,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5555,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4087,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3983,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9165,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9165_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9165_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9166,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9167,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9168,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9168_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9173,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9174,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9175,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9176,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9177,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9178,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9179,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9180,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9181,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9182,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9183,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9184,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3915,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9185,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4061,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9186_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9187,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9188,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4066,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5797,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3916,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4065,
	Time_t2709_CustomAttributesCacheGenerator_Time_get_time_m3935,
	Time_t2709_CustomAttributesCacheGenerator_Time_get_deltaTime_m3957,
	Time_t2709_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5600,
	Time_t2709_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5632,
	Time_t2709_CustomAttributesCacheGenerator_Time_set_timeScale_m3734,
	Time_t2709_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m3971,
	Random_t2710_CustomAttributesCacheGenerator_Random_set_seed_m4011,
	Random_t2710_CustomAttributesCacheGenerator_Random_Range_m3955,
	Random_t2710_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9190,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9193,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7488,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_t2712_PlayerPrefs_GetString_m7488_Arg1_ParameterInfo,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3693,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3692,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7491,
	LocalNotification_t2713_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9195,
	RemoteNotification_t2714_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9197,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9200,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9201,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9203,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9204,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9205,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9206,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9207,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9208,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9209,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9211,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9212,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9214,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9215,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9216,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9217,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9218,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9236,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m9237_Arg3_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m9237_Arg4_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_Raycast_m3784,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m5684_Arg2_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m5684_Arg3_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m5622_Arg1_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m5622_Arg2_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m9238_Arg2_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m9238_Arg3_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9239,
	Collider_t717_CustomAttributesCacheGenerator_Collider_set_enabled_m3796,
	Collider_t717_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9240,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3989,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_t746_Physics2D_IgnoreLayerCollision_m3989_Arg2_ParameterInfo,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9244,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_Raycast_m5685,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_t746_Physics2D_Raycast_m9245_Arg2_ParameterInfo,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_t746_Physics2D_Raycast_m9245_Arg3_ParameterInfo,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_t746_Physics2D_Raycast_m9245_Arg4_ParameterInfo,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_t746_Physics2D_Raycast_m9245_Arg5_ParameterInfo,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5610,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9246,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3982,
	Physics2D_t746_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9247,
	Collider2D_t579_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4050,
	Collider2D_t579_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9249,
	AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_set_clip_m3772,
	AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_Play_m9265,
	AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_t571_AudioSource_Play_m9265_Arg0_ParameterInfo,
	AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_Play_m4046,
	AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4064,
	AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_Stop_m3773,
	AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4047,
	AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9266,
	AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_t571_AudioSource_PlayOneShot_m9266_Arg1_ParameterInfo,
	AudioSource_t571_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3786,
	AnimationEvent_t2729_CustomAttributesCacheGenerator_AnimationEvent_t2729____data_PropertyInfo,
	AnimationCurve_t2733_CustomAttributesCacheGenerator,
	AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_t2733_AnimationCurve__ctor_m9292_Arg0_ParameterInfo,
	AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9294,
	AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_Init_m9296,
	AnimatorStateInfo_t2730_CustomAttributesCacheGenerator_AnimatorStateInfo_t2730____nameHash_PropertyInfo,
	Animator_t622_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5877,
	Animator_t622_CustomAttributesCacheGenerator_Animator_StringToHash_m9315,
	Animator_t622_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9316,
	Animator_t622_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9317,
	Animator_t622_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9318,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3778,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3779,
	CharacterInfo_t2739_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2739_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2739_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2739_CustomAttributesCacheGenerator_flipped,
	Font_t855_CustomAttributesCacheGenerator_Font_get_material_m5889,
	Font_t855_CustomAttributesCacheGenerator_Font_HasCharacter_m5783,
	Font_t855_CustomAttributesCacheGenerator_Font_get_dynamic_m5891,
	Font_t855_CustomAttributesCacheGenerator_Font_get_fontSize_m5892,
	FontTextureRebuildCallback_t2740_CustomAttributesCacheGenerator,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_Init_m9346,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9347,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9350,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5795,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9351,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9352,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9353,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9354,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9355,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9356,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5776,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9357,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9358,
	TextGenerator_t893_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5811,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5681,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5906,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3966,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9369,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4095,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5909,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5708,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5910,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5668,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5683,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5682,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5689,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5655,
	Canvas_t630_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5888,
	CanvasGroup_t601_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m4067,
	CanvasGroup_t601_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5869,
	CanvasGroup_t601_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9371,
	CanvasGroup_t601_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5667,
	CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9374,
	CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5671,
	CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5941,
	CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5663,
	CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9375,
	CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9376,
	CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5659,
	CanvasRenderer_t860_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5656,
	RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9378,
	RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9380,
	RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5670,
	Request_t2744_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2744_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2744_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2744_CustomAttributesCacheGenerator_Request_get_sourceId_m9385,
	Request_t2744_CustomAttributesCacheGenerator_Request_get_appId_m9386,
	Request_t2744_CustomAttributesCacheGenerator_Request_get_domain_m9387,
	Response_t2746_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2746_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2746_CustomAttributesCacheGenerator_Response_get_success_m9396,
	Response_t2746_CustomAttributesCacheGenerator_Response_set_success_m9397,
	Response_t2746_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9398,
	Response_t2746_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9399,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9404,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9405,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9406,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9407,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9408,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9409,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9410,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9411,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9412,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9415,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9416,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9417,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9418,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9419,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9420,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9421,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9422,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9423,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9424,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9425,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9426,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9430,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9431,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9432,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9433,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9436,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9437,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9438,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9439,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9440,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9441,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9442,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9443,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9444,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9445,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9446,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9447,
	DestroyMatchRequest_t2753_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2753_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9451,
	DestroyMatchRequest_t2753_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9452,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9455,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9456,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9457,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9458,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9461,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9462,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9463,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9464,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9465,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9466,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9467,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9468,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9471,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9472,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9473,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9474,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9475,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9476,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9480,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9481,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_name_m9482,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_name_m9483,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9484,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9485,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9486,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9487,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9488,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9489,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9490,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9491,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9492,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9493,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9494,
	ListMatchResponse_t2760_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2760_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9498,
	ListMatchResponse_t2760_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9499,
	AppID_t2761_CustomAttributesCacheGenerator,
	SourceID_t2762_CustomAttributesCacheGenerator,
	NetworkID_t2763_CustomAttributesCacheGenerator,
	NodeID_t2764_CustomAttributesCacheGenerator,
	NetworkMatch_t2769_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9983,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9989,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9990,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9992,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9993,
	JsonArray_t2770_CustomAttributesCacheGenerator,
	JsonObject_t2771_CustomAttributesCacheGenerator,
	SimpleJson_t2774_CustomAttributesCacheGenerator,
	SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9544,
	SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9556,
	SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_t2774____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9997,
	PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9573,
	PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9574,
	ReflectionUtils_t2786_CustomAttributesCacheGenerator,
	ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetConstructorInfo_m9599_Arg1_ParameterInfo,
	ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetContructor_m9604_Arg1_ParameterInfo,
	ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetConstructorByReflection_m9606_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2923_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2780_CustomAttributesCacheGenerator_ConstructorDelegate_t2780_ConstructorDelegate_Invoke_m9584_Arg0_ParameterInfo,
	ConstructorDelegate_t2780_CustomAttributesCacheGenerator_ConstructorDelegate_t2780_ConstructorDelegate_BeginInvoke_m9585_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2781_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2782_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2783_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2784_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2785_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2788_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1059_CustomAttributesCacheGenerator,
	RequireComponent_t1053_CustomAttributesCacheGenerator,
	WritableAttribute_t2794_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2795_CustomAttributesCacheGenerator,
	GUIStateObjects_t2806_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9639,
	Achievement_t2809_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2809_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2809_CustomAttributesCacheGenerator_Achievement_get_id_m9661,
	Achievement_t2809_CustomAttributesCacheGenerator_Achievement_set_id_m9662,
	Achievement_t2809_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9663,
	Achievement_t2809_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9664,
	AchievementDescription_t2810_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2810_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9671,
	AchievementDescription_t2810_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9672,
	Score_t2811_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2811_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2811_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9681,
	Score_t2811_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9682,
	Score_t2811_CustomAttributesCacheGenerator_Score_get_value_m9683,
	Score_t2811_CustomAttributesCacheGenerator_Score_set_value_m9684,
	Leaderboard_t2650_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2650_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2650_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2650_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_id_m9692,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_id_m9693,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9694,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9695,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_range_m9696,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_range_m9697,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9698,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9699,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1062_CustomAttributesCacheGenerator,
	SpaceAttribute_t1060_CustomAttributesCacheGenerator,
	RangeAttribute_t1057_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1063_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1061_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9743,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9745,
	SharedBetweenAnimatorsAttribute_t2827_CustomAttributesCacheGenerator,
	ArgumentCache_t2834_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2834_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2834_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2834_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2834_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2834_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2838_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2838_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2838_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2838_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2838_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2840_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2843_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2843_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2844_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2845_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2846_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1051_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2848_CustomAttributesCacheGenerator,
};
