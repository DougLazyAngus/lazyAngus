﻿#include "il2cpp-config.h"
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
extern TypeInfo* InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t804_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3408);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t804 * tmp;
		tmp = (ExtensionAttribute_t804 *)il2cpp_codegen_object_new (ExtensionAttribute_t804_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4366(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2163 * tmp;
		tmp = (InternalsVisibleToAttribute_t2163 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2163_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7865(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2682_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2682_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var;
void AssetBundle_t2684_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2897 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2897 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10096(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AssetBundle_t2684_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2897 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2897 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10096(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AssetBundle_t2684_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void LayerMask_t900_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void LayerMask_t900_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void LayerMask_t900_CustomAttributesCacheGenerator_LayerMask_t900_LayerMask_GetMask_m8716_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void RuntimePlatform_t787_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void RuntimePlatform_t787_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void RuntimePlatform_t787_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void RuntimePlatform_t787_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void RuntimePlatform_t787_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void SystemInfo_t2688_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void SystemInfo_t2688_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void SystemInfo_t2688_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Coroutine_t953_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2843_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8722_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2843 * tmp;
		tmp = (WritableAttribute_t2843 *)il2cpp_codegen_object_new (WritableAttribute_t2843_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9891(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8738(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GcLeaderboard_t2700_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GcLeaderboard_t2700_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GcLeaderboard_t2700_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GcLeaderboard_t2700_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void MeshFilter_t793_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2843_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_t522_Mesh_Internal_Create_m8796_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2843 * tmp;
		tmp = (WritableAttribute_t2843 *)il2cpp_codegen_object_new (WritableAttribute_t2843_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9891(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_vertices_m4357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_uv_m4359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_triangles_m4358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Renderer_t597_CustomAttributesCacheGenerator_Renderer_set_enabled_m4037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Renderer_t597_CustomAttributesCacheGenerator_Renderer_get_material_m4016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Renderer_t597_CustomAttributesCacheGenerator_Renderer_set_material_m4018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Renderer_t597_CustomAttributesCacheGenerator_Renderer_set_materials_m4289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Renderer_t597_CustomAttributesCacheGenerator_Renderer_get_bounds_m4046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Renderer_t597_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Renderer_t597_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Screen_t2702_CustomAttributesCacheGenerator_Screen_get_width_m3676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Screen_t2702_CustomAttributesCacheGenerator_Screen_get_height_m3691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Screen_t2702_CustomAttributesCacheGenerator_Screen_get_dpi_m3798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Screen_t2702_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Screen_t2702_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Screen_t2702_CustomAttributesCacheGenerator_Screen_get_orientation_m3690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2843_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8823_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2843 * tmp;
		tmp = (WritableAttribute_t2843 *)il2cpp_codegen_object_new (WritableAttribute_t2843_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9891(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m6006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8824_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8824_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RenderTexture_t2703_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RenderTexture_t2703_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUILayer_t2706_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Gradient_t2709_CustomAttributesCacheGenerator_Gradient_Init_m8835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Gradient_t2709_CustomAttributesCacheGenerator_Gradient_Cleanup_m8836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_set_changed_m8848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_get_enabled_m8849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_set_enabled_m3709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUI_t706_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_Label_m3687_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_Box_m3703_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_Button_m3685_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_TextField_m3688_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_TextField_m4124_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_Toggle_m3733_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_SelectionGrid_m3731_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_SelectionGrid_m8887_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginHorizontal_m3686_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginHorizontal_m8888_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginVertical_m3700_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginVertical_m8889_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginScrollView_m3708_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginScrollView_m8890_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUILayoutUtility_t705_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUILayoutUtility_t705_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var;
void GUILayoutUtility_t705_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4589);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2964 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2964 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayoutUtility_t705_CustomAttributesCacheGenerator_GUILayoutUtility_t705_GUILayoutUtility_GetRect_m8911_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void GUILayoutUtility_t705_CustomAttributesCacheGenerator_GUILayoutUtility_t705_GUILayoutUtility_GetRect_m8913_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8964(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIClip_t2725_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIClip_t2725_CustomAttributesCacheGenerator_GUIClip_Pop_m8981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISettings_t2726_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISettings_t2726_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISettings_t2726_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISettings_t2726_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISettings_t2726_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t810_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t810 * tmp;
		tmp = (ExecuteInEditMode_t810 *)il2cpp_codegen_object_new (ExecuteInEditMode_t810_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m4506(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUISkin_t781_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUIContent_t783_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUIContent_t783_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void GUIContent_t783_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyleState_t726_CustomAttributesCacheGenerator_GUIStyleState_Init_m9050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyleState_t726_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyleState_t726_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyleState_t726_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_Init_m9056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_left_m6194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_set_left_m9058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_right_m9059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_set_right_m9060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_top_m6195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_set_top_m9061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9092_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9109(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_Init_m9113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_Cleanup_m9115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_get_rawType_m6057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_get_type_m4132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_get_modifiers_m6053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_get_character_m6055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_get_commandName_m9121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_get_keyCode_m6054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_Use_m9124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Event_t784_CustomAttributesCacheGenerator_Event_PopEvent_m6058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1106_il2cpp_TypeInfo_var;
void EventModifiers_t2735_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1956);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1106 * tmp;
		tmp = (FlagsAttribute_t1106 *)il2cpp_codegen_object_new (FlagsAttribute_t1106_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6231(tmp, NULL);
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
void Vector3_t535_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2837_il2cpp_TypeInfo_var;
void Color32_t756_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2837 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2837 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2837_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m9883(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t789_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Quaternion_t789_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Quaternion_t789_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Quaternion_t789_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Matrix4x4_t1084_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Bounds_t766_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Bounds_t766_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Bounds_t766_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Bounds_t766_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t1044_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Mathf_t728_CustomAttributesCacheGenerator_Mathf_t728_Mathf_SmoothDamp_m6113_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Mathf_t728_CustomAttributesCacheGenerator_Mathf_t728_Mathf_SmoothDamp_m6113_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1106_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2737_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1956);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1106 * tmp;
		tmp = (FlagsAttribute_t1106 *)il2cpp_codegen_object_new (FlagsAttribute_t1106_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6231(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9252(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9253(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9254(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9261(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var;
void Resources_t791_CustomAttributesCacheGenerator_Resources_Load_m4158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2897 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2897 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10096(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextAsset_t780_CustomAttributesCacheGenerator_TextAsset_get_text_m4115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2741_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Shader_t2742_CustomAttributesCacheGenerator_Shader_PropertyToID_m9270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_SetTexture_m9275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_GetTexture_m9277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_SetFloat_m9279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_HasProperty_m9280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2843_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_t523_Material_Internal_CreateWithMaterial_m9281_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2843 * tmp;
		tmp = (WritableAttribute_t2843 *)il2cpp_codegen_object_new (WritableAttribute_t2843_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9891(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2743_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2743_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2743_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2743_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_rect_m5985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_texture_m5978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_textureRect_m6003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_border_m5979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void SpriteRenderer_t658_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void SpriteRenderer_t658_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void DataUtility_t2744_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void DataUtility_t2744_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5990(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void DataUtility_t2744_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void DataUtility_t2744_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9307_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9315_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9317_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9317_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void WWWTranscoder_t2746_CustomAttributesCacheGenerator_WWWTranscoder_t2746_WWWTranscoder_URLEncode_m9321_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void WWWTranscoder_t2746_CustomAttributesCacheGenerator_WWWTranscoder_t2746_WWWTranscoder_QPEncode_m9323_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void WWWTranscoder_t2746_CustomAttributesCacheGenerator_WWWTranscoder_t2746_WWWTranscoder_SevenBitClean_m9326_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void CacheIndex_t2747_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void UnityString_t2748_CustomAttributesCacheGenerator_UnityString_t2748_UnityString_Format_m9328_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AsyncOperation_t2683_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_get_isPlaying_m4155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_get_isEditor_m6095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_get_platform_m3784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m7798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_t1513_Application_ExternalCall_m4082_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_t1513_Application_BuildInvocationForArguments_m9339_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_get_unityVersion_m4159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_OpenURL_m3975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9342(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2965_il2cpp_TypeInfo_var;
void Application_t1513_CustomAttributesCacheGenerator_Application_t1513____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2965_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2965 * tmp;
		tmp = (SecurityCriticalAttribute_t2965 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2965_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m10229(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Behaviour_t1094_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Behaviour_t1094_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Behaviour_t1094_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m4365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_get_depth_m5794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_get_eventMask_m9349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_get_main_m4022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var;
void CameraCallback_t2749_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3412);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2196 * tmp;
		tmp = (EditorBrowsableAttribute_t2196 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8162(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Debug_t2750_CustomAttributesCacheGenerator_Debug_Internal_Log_m9369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2843_il2cpp_TypeInfo_var;
void Debug_t2750_CustomAttributesCacheGenerator_Debug_t2750_Debug_Internal_Log_m9369_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2843 * tmp;
		tmp = (WritableAttribute_t2843 *)il2cpp_codegen_object_new (WritableAttribute_t2843_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9891(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Debug_t2750_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2843_il2cpp_TypeInfo_var;
void Debug_t2750_CustomAttributesCacheGenerator_Debug_t2750_Debug_Internal_LogException_m9370_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2843 * tmp;
		tmp = (WritableAttribute_t2843 *)il2cpp_codegen_object_new (WritableAttribute_t2843_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9891(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Debug_t2750_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Display_t2753_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Display_t2753_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Display_t2753_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Display_t2753_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Display_t2753_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Display_t2753_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Display_t2753_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Display_t2753_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_GetAxis_m4347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_GetButtonDown_m5872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_GetMouseButton_m4238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m4025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_get_mousePosition_m4023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_get_mousePresent_m5871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_GetTouch_m3705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_get_touchCount_m3704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_get_compositionString_m6035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Input_t708_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1106_il2cpp_TypeInfo_var;
void HideFlags_t2756_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1956);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1106 * tmp;
		tmp = (FlagsAttribute_t1106 *)il2cpp_codegen_object_new (FlagsAttribute_t1106_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6231(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_Destroy_m9412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_t704_Object_Destroy_m9412_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_Destroy_m3915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_t704_Object_DestroyImmediate_m9413_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2897 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2897 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10096(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_get_name_m3772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_set_name_m6155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_set_hideFlags_m6068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_ToString_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_Instantiate_m4176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2897 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2897 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10096(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var;
void Object_t704_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2897 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2897 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10096(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Component_t762_CustomAttributesCacheGenerator_Component_get_transform_m4051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Component_t762_CustomAttributesCacheGenerator_Component_get_gameObject_m3771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var;
void Component_t762_CustomAttributesCacheGenerator_Component_GetComponent_m6201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2897 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2897 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10096(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Component_t762_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var;
void Component_t762_CustomAttributesCacheGenerator_Component_GetComponent_m10232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4589);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2964 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2964 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Component_t762_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2897 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2897 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10096(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4589);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2964 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2964 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2897 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2897 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10096(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9429_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9429_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2897 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2897 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2897_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10096(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2843_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9432_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2843 * tmp;
		tmp = (WritableAttribute_t2843 *)il2cpp_codegen_object_new (WritableAttribute_t2843_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9891(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9450_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Time_t2758_CustomAttributesCacheGenerator_Time_get_time_m4156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Time_t2758_CustomAttributesCacheGenerator_Time_get_deltaTime_m4162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Time_t2758_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Time_t2758_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Time_t2758_CustomAttributesCacheGenerator_Time_set_timeScale_m3976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Random_t2759_CustomAttributesCacheGenerator_Random_set_seed_m4262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Random_t2759_CustomAttributesCacheGenerator_Random_Range_m4209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Random_t2759_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m9458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m9459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m4318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_t2761_PlayerPrefs_GetInt_m4318_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m4316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_t2761_PlayerPrefs_GetFloat_m4316_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_t2761_PlayerPrefs_GetString_m7753_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m4314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void LocalNotification_t2762_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RemoteNotification_t2763_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Physics_t2767_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_Raycast_m9504_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_Raycast_m9504_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void Physics_t2767_CustomAttributesCacheGenerator_Physics_Raycast_m4026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_Raycast_m5958_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_Raycast_m5958_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_RaycastAll_m5896_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_RaycastAll_m5896_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_RaycastAll_m9505_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_RaycastAll_m9505_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Physics_t2767_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Collider_t765_CustomAttributesCacheGenerator_Collider_set_enabled_m4038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Collider_t765_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_t797_Physics2D_IgnoreLayerCollision_m4239_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_Raycast_m5959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_t797_Physics2D_Raycast_m9512_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_t797_Physics2D_Raycast_m9512_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_t797_Physics2D_Raycast_m9512_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_t797_Physics2D_Raycast_m9512_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Collider2D_t700_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Collider2D_t700_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9516(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CircleCollider2D_t617_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CircleCollider2D_t617_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_set_clip_m4014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_Play_m9532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_t608_AudioSource_Play_m9532_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_Play_m4302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_Stop_m4015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2894_il2cpp_TypeInfo_var;
void AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_t608_AudioSource_PlayOneShot_m9533_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2894 * tmp;
		tmp = (DefaultValueAttribute_t2894 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2894_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10091(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var;
void AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m4028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2895 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2895 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2895_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void AnimationEvent_t2778_CustomAttributesCacheGenerator_AnimationEvent_t2778____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void AnimationCurve_t2782_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void AnimationCurve_t2782_CustomAttributesCacheGenerator_AnimationCurve_t2782_AnimationCurve__ctor_m9559_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AnimationCurve_t2782_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void AnimationCurve_t2782_CustomAttributesCacheGenerator_AnimationCurve_Init_m9563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2779_CustomAttributesCacheGenerator_AnimatorStateInfo_t2779____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Animator_t668_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Animator_t668_CustomAttributesCacheGenerator_Animator_StringToHash_m9582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Animator_t668_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Animator_t668_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Animator_t668_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m4020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m4021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void CharacterInfo_t2788_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void CharacterInfo_t2788_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void CharacterInfo_t2788_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t808_il2cpp_TypeInfo_var;
void CharacterInfo_t2788_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t808 * tmp;
		tmp = (ObsoleteAttribute_t808 *)il2cpp_codegen_object_new (ObsoleteAttribute_t808_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4473(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Font_t915_CustomAttributesCacheGenerator_Font_get_material_m6159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Font_t915_CustomAttributesCacheGenerator_Font_HasCharacter_m6056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Font_t915_CustomAttributesCacheGenerator_Font_get_dynamic_m6161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Font_t915_CustomAttributesCacheGenerator_Font_get_fontSize_m6162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2789_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3412);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2196 * tmp;
		tmp = (EditorBrowsableAttribute_t2196 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8162(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_Init_m9613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9623(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9624(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4362(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5957(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void Canvas_t544_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CanvasGroup_t1066_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CanvasGroup_t1066_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CanvasGroup_t1066_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransformUtility_t1068_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransformUtility_t1068_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2836_il2cpp_TypeInfo_var;
void RectTransformUtility_t1068_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2836 * tmp;
		tmp = (WrapperlessIcall_t2836 *)il2cpp_codegen_object_new (WrapperlessIcall_t2836_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9882(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2793_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2793_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2793_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2793_CustomAttributesCacheGenerator_Request_get_sourceId_m9652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2793_CustomAttributesCacheGenerator_Request_get_appId_m9653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2793_CustomAttributesCacheGenerator_Request_get_domain_m9654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2795_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2795_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2795_CustomAttributesCacheGenerator_Response_get_success_m9663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2795_CustomAttributesCacheGenerator_Response_set_success_m9664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2795_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2795_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2800_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2800_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2800_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2800_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2800_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2800_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2802_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2802_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2802_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2803_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2803_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2803_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2803_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2803_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2803_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9738(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_name_m9749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_name_m9750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2809_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2809_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2809_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t2967_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2810_il2cpp_TypeInfo_var;
void AppID_t2810_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2967_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4592);
		AppID_t2810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4493);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2967 * tmp;
		tmp = (DefaultValueAttribute_t2967 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2967_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10247(tmp, Box(AppID_t2810_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2967_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2811_il2cpp_TypeInfo_var;
void SourceID_t2811_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2967_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4592);
		SourceID_t2811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4492);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2967 * tmp;
		tmp = (DefaultValueAttribute_t2967 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2967_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10247(tmp, Box(SourceID_t2811_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2967_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2812_il2cpp_TypeInfo_var;
void NetworkID_t2812_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2967_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4592);
		NetworkID_t2812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4495);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2967 * tmp;
		tmp = (DefaultValueAttribute_t2967 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2967_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10247(tmp, Box(NetworkID_t2812_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2967_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2813_il2cpp_TypeInfo_var;
void NodeID_t2813_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2967_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4592);
		NodeID_t2813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4496);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2967 * tmp;
		tmp = (DefaultValueAttribute_t2967 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2967_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10247(tmp, Box(NodeID_t2813_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2818_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10248(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2969_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2969_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10254(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2969_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10255(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2969_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10257(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2969_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10258(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var;
void JsonArray_t2819_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4593);
		EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3412);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2970 * tmp;
		tmp = (GeneratedCodeAttribute_t2970 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10259(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2196 * tmp;
		tmp = (EditorBrowsableAttribute_t2196 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8162(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void JsonObject_t2820_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3412);
		GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4593);
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2196 * tmp;
		tmp = (EditorBrowsableAttribute_t2196 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8162(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t2970 * tmp;
		tmp = (GeneratedCodeAttribute_t2970 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10259(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var;
void SimpleJson_t2823_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2970 * tmp;
		tmp = (GeneratedCodeAttribute_t2970 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10259(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var;
void SimpleJson_t2823_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2971 * tmp;
		tmp = (SuppressMessageAttribute_t2971 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10260(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10261(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var;
void SimpleJson_t2823_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2971 * tmp;
		tmp = (SuppressMessageAttribute_t2971 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10260(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var;
void SimpleJson_t2823_CustomAttributesCacheGenerator_SimpleJson_t2823____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3412);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2196 * tmp;
		tmp = (EditorBrowsableAttribute_t2196 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2196_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8162(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2821_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2970 * tmp;
		tmp = (GeneratedCodeAttribute_t2970 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10259(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2821_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2971 * tmp;
		tmp = (SuppressMessageAttribute_t2971 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10260(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10261(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2822_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2970 * tmp;
		tmp = (GeneratedCodeAttribute_t2970 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10259(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2822_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2971 * tmp;
		tmp = (SuppressMessageAttribute_t2971 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10260(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10261(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2822_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2971 * tmp;
		tmp = (SuppressMessageAttribute_t2971 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2971_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10260(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10261(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var;
void ReflectionUtils_t2835_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2970 * tmp;
		tmp = (GeneratedCodeAttribute_t2970 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2970_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10259(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void ReflectionUtils_t2835_CustomAttributesCacheGenerator_ReflectionUtils_t2835_ReflectionUtils_GetConstructorInfo_m9866_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void ReflectionUtils_t2835_CustomAttributesCacheGenerator_ReflectionUtils_t2835_ReflectionUtils_GetContructor_m9871_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void ReflectionUtils_t2835_CustomAttributesCacheGenerator_ReflectionUtils_t2835_ReflectionUtils_GetConstructorByReflection_m9873_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2972_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2829_CustomAttributesCacheGenerator_ConstructorDelegate_t2829_ConstructorDelegate_Invoke_m9851_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t805_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2829_CustomAttributesCacheGenerator_ConstructorDelegate_t2829_ConstructorDelegate_BeginInvoke_m9852_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t805 * tmp;
		tmp = (ParamArrayAttribute_t805 *)il2cpp_codegen_object_new (ParamArrayAttribute_t805_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4385(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2830_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2831_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2832_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2833_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2834_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2837_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1115_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m8024(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void RequireComponent_t811_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8025(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void WritableAttribute_t2843_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8025(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2844_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var;
void GUIStateObjects_t2855_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4589);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2964 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2964 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2858_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2858_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2858_CustomAttributesCacheGenerator_Achievement_get_id_m9928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2858_CustomAttributesCacheGenerator_Achievement_set_id_m9929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2858_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2858_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2859_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2859_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2859_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2860_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2860_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2860_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2860_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2860_CustomAttributesCacheGenerator_Score_get_value_m9950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2860_CustomAttributesCacheGenerator_Score_set_value_m9951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_get_id_m9959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_set_id_m9960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_get_range_m9963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_set_range_m9964(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8024(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8025(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void TooltipAttribute_t1118_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8024(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8025(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void SpaceAttribute_t1116_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8024(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8025(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void RangeAttribute_t1114_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8024(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8025(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1119_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8024(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8025(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1117_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m8024(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8025(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4589);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2964 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2964 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m10010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4589);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2964 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2964 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m10012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4589);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2964 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2964 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2964_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2876_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8025(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void ArgumentCache_t2883_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
void ArgumentCache_t2883_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
void ArgumentCache_t2883_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
void ArgumentCache_t2883_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void ArgumentCache_t2883_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void ArgumentCache_t2883_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
void PersistentCall_t2887_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
void PersistentCall_t2887_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
void PersistentCall_t2887_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
void PersistentCall_t2887_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void PersistentCall_t2887_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2889_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var;
void UnityEventBase_t2892_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1109 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1109 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1109_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6250(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t806_il2cpp_TypeInfo_var;
void UnityEventBase_t2892_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t806 * tmp;
		tmp = (SerializeField_t806 *)il2cpp_codegen_object_new (SerializeField_t806_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4386(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t1108_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2893_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1108 * tmp;
		tmp = (AddComponentMenu_t1108 *)il2cpp_codegen_object_new (AddComponentMenu_t1108_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m6249(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2894_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2895_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1109_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8025(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m8024(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t809_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2897_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t809 * tmp;
		tmp = (AttributeUsageAttribute_t809 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t809_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4503(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[828] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2682_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8704,
	AssetBundleCreateRequest_t2682_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8705,
	AssetBundle_t2684_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8709,
	AssetBundle_t2684_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8710,
	AssetBundle_t2684_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8711,
	LayerMask_t900_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8714,
	LayerMask_t900_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8715,
	LayerMask_t900_CustomAttributesCacheGenerator_LayerMask_t900_LayerMask_GetMask_m8716_Arg0_ParameterInfo,
	RuntimePlatform_t787_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t787_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t787_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t787_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t787_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2688_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4355,
	SystemInfo_t2688_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8717,
	SystemInfo_t2688_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7800,
	Coroutine_t953_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8720,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8722,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8722_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8723,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8725,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8730,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8731,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8732,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8733,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8734,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8735,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8736,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8737,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8738,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8739,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8740,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8741,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8742,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8743,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8744,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8745,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8746,
	GameCenterPlatform_t802_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8748,
	GcLeaderboard_t2700_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8792,
	GcLeaderboard_t2700_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8793,
	GcLeaderboard_t2700_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8794,
	GcLeaderboard_t2700_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8795,
	MeshFilter_t793_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4203,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8796,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_t522_Mesh_Internal_Create_m8796_Arg0_ParameterInfo,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_vertices_m4357,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_uv_m4359,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4360,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_triangles_m4358,
	Renderer_t597_CustomAttributesCacheGenerator_Renderer_set_enabled_m4037,
	Renderer_t597_CustomAttributesCacheGenerator_Renderer_get_material_m4016,
	Renderer_t597_CustomAttributesCacheGenerator_Renderer_set_material_m4018,
	Renderer_t597_CustomAttributesCacheGenerator_Renderer_set_materials_m4289,
	Renderer_t597_CustomAttributesCacheGenerator_Renderer_get_bounds_m4046,
	Renderer_t597_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5890,
	Renderer_t597_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5891,
	Screen_t2702_CustomAttributesCacheGenerator_Screen_get_width_m3676,
	Screen_t2702_CustomAttributesCacheGenerator_Screen_get_height_m3691,
	Screen_t2702_CustomAttributesCacheGenerator_Screen_get_dpi_m3798,
	Screen_t2702_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4111,
	Screen_t2702_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4112,
	Screen_t2702_CustomAttributesCacheGenerator_Screen_get_orientation_m3690,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8818,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8819,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8823,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8823_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5932,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m6006,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8824,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8824_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8824_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3716,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3715,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8825,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3717,
	RenderTexture_t2703_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8826,
	RenderTexture_t2703_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8827,
	GUILayer_t2706_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8831,
	Gradient_t2709_CustomAttributesCacheGenerator_Gradient_Init_m8835,
	Gradient_t2709_CustomAttributesCacheGenerator_Gradient_Cleanup_m8836,
	GUI_t706_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t706_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t706_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8843,
	GUI_t706_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8844,
	GUI_t706_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8845,
	GUI_t706_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8846,
	GUI_t706_CustomAttributesCacheGenerator_GUI_set_changed_m8848,
	GUI_t706_CustomAttributesCacheGenerator_GUI_get_enabled_m8849,
	GUI_t706_CustomAttributesCacheGenerator_GUI_set_enabled_m3709,
	GUI_t706_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8851,
	GUI_t706_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8854,
	GUI_t706_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8857,
	GUI_t706_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8864,
	GUI_t706_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8871,
	GUI_t706_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8873,
	GUI_t706_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8880,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_Label_m3687_Arg1_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_Box_m3703_Arg1_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_Button_m3685_Arg1_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_TextField_m3688_Arg1_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_TextField_m4124_Arg2_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_Toggle_m3733_Arg2_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_SelectionGrid_m3731_Arg3_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_SelectionGrid_m8887_Arg4_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginHorizontal_m3686_Arg0_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginHorizontal_m8888_Arg2_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginVertical_m3700_Arg0_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginVertical_m8889_Arg2_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginScrollView_m3708_Arg1_ParameterInfo,
	GUILayout_t2712_CustomAttributesCacheGenerator_GUILayout_t2712_GUILayout_BeginScrollView_m8890_Arg6_ParameterInfo,
	GUILayoutUtility_t705_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8905,
	GUILayoutUtility_t705_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8907,
	GUILayoutUtility_t705_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8908,
	GUILayoutUtility_t705_CustomAttributesCacheGenerator_GUILayoutUtility_t705_GUILayoutUtility_GetRect_m8911_Arg2_ParameterInfo,
	GUILayoutUtility_t705_CustomAttributesCacheGenerator_GUILayoutUtility_t705_GUILayoutUtility_GetRect_m8913_Arg3_ParameterInfo,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8955,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8959,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8963,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8964,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8965,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8966,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8967,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8968,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8970,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8972,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8976,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8977,
	GUIUtility_t2724_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8978,
	GUIClip_t2725_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8980,
	GUIClip_t2725_CustomAttributesCacheGenerator_GUIClip_Pop_m8981,
	GUISettings_t2726_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2726_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2726_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2726_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2726_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t781_CustomAttributesCacheGenerator,
	GUISkin_t781_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t781_CustomAttributesCacheGenerator_m_box,
	GUISkin_t781_CustomAttributesCacheGenerator_m_button,
	GUISkin_t781_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t781_CustomAttributesCacheGenerator_m_label,
	GUISkin_t781_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t781_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t781_CustomAttributesCacheGenerator_m_window,
	GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t781_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t781_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t781_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t781_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t781_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t781_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t781_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t781_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t781_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t781_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t783_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t783_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t783_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t726_CustomAttributesCacheGenerator_GUIStyleState_Init_m9050,
	GUIStyleState_t726_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9051,
	GUIStyleState_t726_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9052,
	GUIStyleState_t726_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9053,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_Init_m9056,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9057,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_left_m6194,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_set_left_m9058,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_right_m9059,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_set_right_m9060,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_top_m6195,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_set_top_m9061,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4135,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9062,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6188,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6189,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9064,
	RectOffset_t701_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9066,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9070,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9071,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9072,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9073,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9074,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9075,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9077,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9078,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9079,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3677,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9080,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3678,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9081,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9082,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9083,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3682,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9084,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3681,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9085,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3778,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3779,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9088,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9091,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9092_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9094,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9095,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9099,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9101,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9103,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9106,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9109,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9111,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6091,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6092,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg1_ParameterInfo,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg2_ParameterInfo,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg3_ParameterInfo,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg4_ParameterInfo,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg5_ParameterInfo,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_t948_TouchScreenKeyboard_Open_m9112_Arg6_ParameterInfo,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6033,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6034,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6090,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6032,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6089,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6044,
	TouchScreenKeyboard_t948_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6043,
	Event_t784_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t784_CustomAttributesCacheGenerator_Event_Init_m9113,
	Event_t784_CustomAttributesCacheGenerator_Event_Cleanup_m9115,
	Event_t784_CustomAttributesCacheGenerator_Event_get_rawType_m6057,
	Event_t784_CustomAttributesCacheGenerator_Event_get_type_m4132,
	Event_t784_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9116,
	Event_t784_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9118,
	Event_t784_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9120,
	Event_t784_CustomAttributesCacheGenerator_Event_get_modifiers_m6053,
	Event_t784_CustomAttributesCacheGenerator_Event_get_character_m6055,
	Event_t784_CustomAttributesCacheGenerator_Event_get_commandName_m9121,
	Event_t784_CustomAttributesCacheGenerator_Event_get_keyCode_m6054,
	Event_t784_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9122,
	Event_t784_CustomAttributesCacheGenerator_Event_Use_m9124,
	Event_t784_CustomAttributesCacheGenerator_Event_PopEvent_m6058,
	EventModifiers_t2735_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t535_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t756_CustomAttributesCacheGenerator,
	Quaternion_t789_CustomAttributesCacheGenerator,
	Quaternion_t789_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9150,
	Quaternion_t789_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9153,
	Quaternion_t789_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9155,
	Matrix4x4_t1084_CustomAttributesCacheGenerator,
	Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9171,
	Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9173,
	Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9175,
	Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9178,
	Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9190,
	Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9193,
	Matrix4x4_t1084_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9194,
	Bounds_t766_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9211,
	Bounds_t766_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9214,
	Bounds_t766_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9217,
	Bounds_t766_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9221,
	Vector4_t1044_CustomAttributesCacheGenerator,
	Mathf_t728_CustomAttributesCacheGenerator_Mathf_t728_Mathf_SmoothDamp_m6113_Arg4_ParameterInfo,
	Mathf_t728_CustomAttributesCacheGenerator_Mathf_t728_Mathf_SmoothDamp_m6113_Arg5_ParameterInfo,
	DrivenTransformProperties_t2737_CustomAttributesCacheGenerator,
	RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9252,
	RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9253,
	RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9254,
	RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9255,
	RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9256,
	RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9257,
	RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9258,
	RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9259,
	RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9260,
	RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9261,
	RectTransform_t542_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9262,
	Resources_t791_CustomAttributesCacheGenerator_Resources_Load_m4158,
	TextAsset_t780_CustomAttributesCacheGenerator_TextAsset_get_text_m4115,
	SerializePrivateVariables_t2741_CustomAttributesCacheGenerator,
	Shader_t2742_CustomAttributesCacheGenerator_Shader_PropertyToID_m9270,
	Material_t523_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9273,
	Material_t523_CustomAttributesCacheGenerator_Material_SetTexture_m9275,
	Material_t523_CustomAttributesCacheGenerator_Material_GetTexture_m9277,
	Material_t523_CustomAttributesCacheGenerator_Material_SetFloat_m9279,
	Material_t523_CustomAttributesCacheGenerator_Material_HasProperty_m9280,
	Material_t523_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9281,
	Material_t523_CustomAttributesCacheGenerator_Material_t523_Material_Internal_CreateWithMaterial_m9281_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2743_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2743_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9284,
	SphericalHarmonicsL2_t2743_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9287,
	SphericalHarmonicsL2_t2743_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9290,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_rect_m5985,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5981,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_texture_m5978,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_textureRect_m6003,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_border_m5979,
	SpriteRenderer_t658_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9300,
	SpriteRenderer_t658_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9301,
	DataUtility_t2744_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5991,
	DataUtility_t2744_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5990,
	DataUtility_t2744_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5984,
	DataUtility_t2744_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9302,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9305,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9306,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4210,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9307_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9308,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9311,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3869,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9312,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7758,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7764,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3720,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9315_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3719,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9317_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9317_Arg3_ParameterInfo,
	WWWTranscoder_t2746_CustomAttributesCacheGenerator_WWWTranscoder_t2746_WWWTranscoder_URLEncode_m9321_Arg1_ParameterInfo,
	WWWTranscoder_t2746_CustomAttributesCacheGenerator_WWWTranscoder_t2746_WWWTranscoder_QPEncode_m9323_Arg1_ParameterInfo,
	WWWTranscoder_t2746_CustomAttributesCacheGenerator_WWWTranscoder_t2746_WWWTranscoder_SevenBitClean_m9326_Arg1_ParameterInfo,
	CacheIndex_t2747_CustomAttributesCacheGenerator,
	UnityString_t2748_CustomAttributesCacheGenerator_UnityString_t2748_UnityString_Format_m9328_Arg1_ParameterInfo,
	AsyncOperation_t2683_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9330,
	Application_t1513_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3770,
	Application_t1513_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9337,
	Application_t1513_CustomAttributesCacheGenerator_Application_get_isPlaying_m4155,
	Application_t1513_CustomAttributesCacheGenerator_Application_get_isEditor_m6095,
	Application_t1513_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4081,
	Application_t1513_CustomAttributesCacheGenerator_Application_get_platform_m3784,
	Application_t1513_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m7798,
	Application_t1513_CustomAttributesCacheGenerator_Application_t1513_Application_ExternalCall_m4082_Arg1_ParameterInfo,
	Application_t1513_CustomAttributesCacheGenerator_Application_t1513_Application_BuildInvocationForArguments_m9339_Arg1_ParameterInfo,
	Application_t1513_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9340,
	Application_t1513_CustomAttributesCacheGenerator_Application_get_unityVersion_m4159,
	Application_t1513_CustomAttributesCacheGenerator_Application_OpenURL_m3975,
	Application_t1513_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9342,
	Application_t1513_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1513_CustomAttributesCacheGenerator_Application_t1513____persistentDataPath_PropertyInfo,
	Behaviour_t1094_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5828,
	Behaviour_t1094_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6065,
	Behaviour_t1094_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5829,
	Camera_t545_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5882,
	Camera_t545_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5881,
	Camera_t545_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m4365,
	Camera_t545_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4333,
	Camera_t545_CustomAttributesCacheGenerator_Camera_get_depth_m5794,
	Camera_t545_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5894,
	Camera_t545_CustomAttributesCacheGenerator_Camera_get_eventMask_m9349,
	Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9350,
	Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9351,
	Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9352,
	Camera_t545_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9354,
	Camera_t545_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9355,
	Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9356,
	Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9357,
	Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9358,
	Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9359,
	Camera_t545_CustomAttributesCacheGenerator_Camera_get_main_m4022,
	Camera_t545_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9360,
	Camera_t545_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9361,
	Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9366,
	Camera_t545_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9368,
	CameraCallback_t2749_CustomAttributesCacheGenerator,
	Debug_t2750_CustomAttributesCacheGenerator_Debug_Internal_Log_m9369,
	Debug_t2750_CustomAttributesCacheGenerator_Debug_t2750_Debug_Internal_Log_m9369_Arg2_ParameterInfo,
	Debug_t2750_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9370,
	Debug_t2750_CustomAttributesCacheGenerator_Debug_t2750_Debug_Internal_LogException_m9370_Arg1_ParameterInfo,
	Debug_t2750_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4080,
	Display_t2753_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9395,
	Display_t2753_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9396,
	Display_t2753_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9397,
	Display_t2753_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9398,
	Display_t2753_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9399,
	Display_t2753_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9400,
	Display_t2753_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9401,
	Display_t2753_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9402,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4030,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4029,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9403,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9404,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9405,
	Input_t708_CustomAttributesCacheGenerator_Input_GetAxis_m4347,
	Input_t708_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5873,
	Input_t708_CustomAttributesCacheGenerator_Input_GetButtonDown_m5872,
	Input_t708_CustomAttributesCacheGenerator_Input_GetMouseButton_m4238,
	Input_t708_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m4025,
	Input_t708_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4237,
	Input_t708_CustomAttributesCacheGenerator_Input_get_mousePosition_m4023,
	Input_t708_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5846,
	Input_t708_CustomAttributesCacheGenerator_Input_get_mousePresent_m5871,
	Input_t708_CustomAttributesCacheGenerator_Input_GetTouch_m3705,
	Input_t708_CustomAttributesCacheGenerator_Input_get_touchCount_m3704,
	Input_t708_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6093,
	Input_t708_CustomAttributesCacheGenerator_Input_get_compositionString_m6035,
	Input_t708_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9407,
	HideFlags_t2756_CustomAttributesCacheGenerator,
	Object_t704_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9409,
	Object_t704_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9411,
	Object_t704_CustomAttributesCacheGenerator_Object_Destroy_m9412,
	Object_t704_CustomAttributesCacheGenerator_Object_t704_Object_Destroy_m9412_Arg1_ParameterInfo,
	Object_t704_CustomAttributesCacheGenerator_Object_Destroy_m3915,
	Object_t704_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9413,
	Object_t704_CustomAttributesCacheGenerator_Object_t704_Object_DestroyImmediate_m9413_Arg1_ParameterInfo,
	Object_t704_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6094,
	Object_t704_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9414,
	Object_t704_CustomAttributesCacheGenerator_Object_get_name_m3772,
	Object_t704_CustomAttributesCacheGenerator_Object_set_name_m6155,
	Object_t704_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t704_CustomAttributesCacheGenerator_Object_set_hideFlags_m6068,
	Object_t704_CustomAttributesCacheGenerator_Object_ToString_m525,
	Object_t704_CustomAttributesCacheGenerator_Object_Instantiate_m4176,
	Object_t704_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9420,
	Component_t762_CustomAttributesCacheGenerator_Component_get_transform_m4051,
	Component_t762_CustomAttributesCacheGenerator_Component_get_gameObject_m3771,
	Component_t762_CustomAttributesCacheGenerator_Component_GetComponent_m6201,
	Component_t762_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9422,
	Component_t762_CustomAttributesCacheGenerator_Component_GetComponent_m10232,
	Component_t762_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9423,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9425,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9426,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10236,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9427,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9428,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4054,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6070,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6071,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3971,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5830,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4350,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4234,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9429,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9429_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9429_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9430,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9431,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9432,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9432_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9437,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9438,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9439,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9440,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9441,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9442,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9443,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9444,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9445,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9446,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9447,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9448,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4177,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9449,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4322,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9450_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9451,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9452,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9453,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4326,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6069,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4178,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4325,
	Time_t2758_CustomAttributesCacheGenerator_Time_get_time_m4156,
	Time_t2758_CustomAttributesCacheGenerator_Time_get_deltaTime_m4162,
	Time_t2758_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5875,
	Time_t2758_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5906,
	Time_t2758_CustomAttributesCacheGenerator_Time_set_timeScale_m3976,
	Random_t2759_CustomAttributesCacheGenerator_Random_set_seed_m4262,
	Random_t2759_CustomAttributesCacheGenerator_Random_Range_m4209,
	Random_t2759_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9455,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m9458,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m9459,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9460,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m4318,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_t2761_PlayerPrefs_GetInt_m4318_Arg1_ParameterInfo,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m4316,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_t2761_PlayerPrefs_GetFloat_m4316_Arg1_ParameterInfo,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7753,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_t2761_PlayerPrefs_GetString_m7753_Arg1_ParameterInfo,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3935,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3934,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m4314,
	PlayerPrefs_t2761_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7756,
	LocalNotification_t2762_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9462,
	RemoteNotification_t2763_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9464,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9467,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9468,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9470,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9471,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9472,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9473,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9474,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9475,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9476,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9478,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9479,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9481,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9482,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9483,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9484,
	NotificationServices_t2765_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9485,
	Physics_t2767_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9503,
	Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_Raycast_m9504_Arg3_ParameterInfo,
	Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_Raycast_m9504_Arg4_ParameterInfo,
	Physics_t2767_CustomAttributesCacheGenerator_Physics_Raycast_m4026,
	Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_Raycast_m5958_Arg2_ParameterInfo,
	Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_Raycast_m5958_Arg3_ParameterInfo,
	Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_RaycastAll_m5896_Arg1_ParameterInfo,
	Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_RaycastAll_m5896_Arg2_ParameterInfo,
	Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_RaycastAll_m9505_Arg2_ParameterInfo,
	Physics_t2767_CustomAttributesCacheGenerator_Physics_t2767_Physics_RaycastAll_m9505_Arg3_ParameterInfo,
	Physics_t2767_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9506,
	Collider_t765_CustomAttributesCacheGenerator_Collider_set_enabled_m4038,
	Collider_t765_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9507,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4239,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_t797_Physics2D_IgnoreLayerCollision_m4239_Arg2_ParameterInfo,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9511,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_Raycast_m5959,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_t797_Physics2D_Raycast_m9512_Arg2_ParameterInfo,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_t797_Physics2D_Raycast_m9512_Arg3_ParameterInfo,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_t797_Physics2D_Raycast_m9512_Arg4_ParameterInfo,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_t797_Physics2D_Raycast_m9512_Arg5_ParameterInfo,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5885,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9513,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4232,
	Physics2D_t797_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9514,
	Collider2D_t700_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4309,
	Collider2D_t700_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9516,
	CircleCollider2D_t617_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4308,
	CircleCollider2D_t617_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4307,
	AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_set_clip_m4014,
	AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_Play_m9532,
	AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_t608_AudioSource_Play_m9532_Arg0_ParameterInfo,
	AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_Play_m4302,
	AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4324,
	AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_Stop_m4015,
	AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4303,
	AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9533,
	AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_t608_AudioSource_PlayOneShot_m9533_Arg1_ParameterInfo,
	AudioSource_t608_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m4028,
	AnimationEvent_t2778_CustomAttributesCacheGenerator_AnimationEvent_t2778____data_PropertyInfo,
	AnimationCurve_t2782_CustomAttributesCacheGenerator,
	AnimationCurve_t2782_CustomAttributesCacheGenerator_AnimationCurve_t2782_AnimationCurve__ctor_m9559_Arg0_ParameterInfo,
	AnimationCurve_t2782_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9561,
	AnimationCurve_t2782_CustomAttributesCacheGenerator_AnimationCurve_Init_m9563,
	AnimatorStateInfo_t2779_CustomAttributesCacheGenerator_AnimatorStateInfo_t2779____nameHash_PropertyInfo,
	Animator_t668_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6147,
	Animator_t668_CustomAttributesCacheGenerator_Animator_StringToHash_m9582,
	Animator_t668_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9583,
	Animator_t668_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9584,
	Animator_t668_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9585,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m4020,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m4021,
	CharacterInfo_t2788_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2788_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2788_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2788_CustomAttributesCacheGenerator_flipped,
	Font_t915_CustomAttributesCacheGenerator_Font_get_material_m6159,
	Font_t915_CustomAttributesCacheGenerator_Font_HasCharacter_m6056,
	Font_t915_CustomAttributesCacheGenerator_Font_get_dynamic_m6161,
	Font_t915_CustomAttributesCacheGenerator_Font_get_fontSize_m6162,
	FontTextureRebuildCallback_t2789_CustomAttributesCacheGenerator,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_Init_m9613,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9614,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9617,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6067,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9618,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9619,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9620,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9621,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9622,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9623,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6049,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9624,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9625,
	TextGenerator_t951_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6082,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5955,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6176,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4218,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9636,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4362,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6179,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5982,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6180,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5942,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5957,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5956,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5963,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5929,
	Canvas_t544_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6158,
	CanvasGroup_t1066_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6139,
	CanvasGroup_t1066_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9638,
	CanvasGroup_t1066_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5941,
	CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9641,
	CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5945,
	CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6211,
	CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5937,
	CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9642,
	CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9643,
	CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5933,
	CanvasRenderer_t920_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5930,
	RectTransformUtility_t1068_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9645,
	RectTransformUtility_t1068_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9647,
	RectTransformUtility_t1068_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5944,
	Request_t2793_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2793_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2793_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2793_CustomAttributesCacheGenerator_Request_get_sourceId_m9652,
	Request_t2793_CustomAttributesCacheGenerator_Request_get_appId_m9653,
	Request_t2793_CustomAttributesCacheGenerator_Request_get_domain_m9654,
	Response_t2795_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2795_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2795_CustomAttributesCacheGenerator_Response_get_success_m9663,
	Response_t2795_CustomAttributesCacheGenerator_Response_set_success_m9664,
	Response_t2795_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9665,
	Response_t2795_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9666,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9671,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9672,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9673,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9674,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9675,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9676,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9677,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9678,
	CreateMatchRequest_t2798_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9679,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9682,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9683,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9684,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9685,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9686,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9687,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9688,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9689,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9690,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9691,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9692,
	CreateMatchResponse_t2799_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9693,
	JoinMatchRequest_t2800_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2800_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2800_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9697,
	JoinMatchRequest_t2800_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9698,
	JoinMatchRequest_t2800_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9699,
	JoinMatchRequest_t2800_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9700,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9703,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9704,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9705,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9706,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9707,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9708,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9709,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9710,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9711,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9712,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9713,
	JoinMatchResponse_t2801_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9714,
	DestroyMatchRequest_t2802_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2802_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9718,
	DestroyMatchRequest_t2802_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9719,
	DropConnectionRequest_t2803_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2803_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2803_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9722,
	DropConnectionRequest_t2803_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9723,
	DropConnectionRequest_t2803_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9724,
	DropConnectionRequest_t2803_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9725,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9728,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9729,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9730,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9731,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9732,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9733,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9734,
	ListMatchRequest_t2804_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9735,
	MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9738,
	MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9739,
	MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9740,
	MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9741,
	MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9742,
	MatchDirectConnectInfo_t2805_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9743,
	MatchDesc_t2807_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2807_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2807_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2807_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2807_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2807_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2807_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2807_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2807_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9747,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9748,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_name_m9749,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_name_m9750,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9751,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9752,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9753,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9754,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9755,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9756,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9757,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9758,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9759,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9760,
	MatchDesc_t2807_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9761,
	ListMatchResponse_t2809_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2809_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9765,
	ListMatchResponse_t2809_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9766,
	AppID_t2810_CustomAttributesCacheGenerator,
	SourceID_t2811_CustomAttributesCacheGenerator,
	NetworkID_t2812_CustomAttributesCacheGenerator,
	NodeID_t2813_CustomAttributesCacheGenerator,
	NetworkMatch_t2818_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10248,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2969_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2969_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10254,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2969_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10255,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2969_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10257,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2969_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10258,
	JsonArray_t2819_CustomAttributesCacheGenerator,
	JsonObject_t2820_CustomAttributesCacheGenerator,
	SimpleJson_t2823_CustomAttributesCacheGenerator,
	SimpleJson_t2823_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9811,
	SimpleJson_t2823_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9823,
	SimpleJson_t2823_CustomAttributesCacheGenerator_SimpleJson_t2823____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2821_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2821_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10262,
	PocoJsonSerializerStrategy_t2822_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2822_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9840,
	PocoJsonSerializerStrategy_t2822_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9841,
	ReflectionUtils_t2835_CustomAttributesCacheGenerator,
	ReflectionUtils_t2835_CustomAttributesCacheGenerator_ReflectionUtils_t2835_ReflectionUtils_GetConstructorInfo_m9866_Arg1_ParameterInfo,
	ReflectionUtils_t2835_CustomAttributesCacheGenerator_ReflectionUtils_t2835_ReflectionUtils_GetContructor_m9871_Arg1_ParameterInfo,
	ReflectionUtils_t2835_CustomAttributesCacheGenerator_ReflectionUtils_t2835_ReflectionUtils_GetConstructorByReflection_m9873_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2972_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2829_CustomAttributesCacheGenerator_ConstructorDelegate_t2829_ConstructorDelegate_Invoke_m9851_Arg0_ParameterInfo,
	ConstructorDelegate_t2829_CustomAttributesCacheGenerator_ConstructorDelegate_t2829_ConstructorDelegate_BeginInvoke_m9852_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2830_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2831_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2832_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2833_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2834_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2837_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1115_CustomAttributesCacheGenerator,
	RequireComponent_t811_CustomAttributesCacheGenerator,
	WritableAttribute_t2843_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2844_CustomAttributesCacheGenerator,
	GUIStateObjects_t2855_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9906,
	Achievement_t2858_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2858_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2858_CustomAttributesCacheGenerator_Achievement_get_id_m9928,
	Achievement_t2858_CustomAttributesCacheGenerator_Achievement_set_id_m9929,
	Achievement_t2858_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9930,
	Achievement_t2858_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9931,
	AchievementDescription_t2859_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2859_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9938,
	AchievementDescription_t2859_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9939,
	Score_t2860_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2860_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2860_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9948,
	Score_t2860_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9949,
	Score_t2860_CustomAttributesCacheGenerator_Score_get_value_m9950,
	Score_t2860_CustomAttributesCacheGenerator_Score_set_value_m9951,
	Leaderboard_t2699_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2699_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2699_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2699_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_get_id_m9959,
	Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_set_id_m9960,
	Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9961,
	Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9962,
	Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_get_range_m9963,
	Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_set_range_m9964,
	Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9965,
	Leaderboard_t2699_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9966,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1118_CustomAttributesCacheGenerator,
	SpaceAttribute_t1116_CustomAttributesCacheGenerator,
	RangeAttribute_t1114_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1119_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1117_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m10010,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m10012,
	SharedBetweenAnimatorsAttribute_t2876_CustomAttributesCacheGenerator,
	ArgumentCache_t2883_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2883_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2883_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2883_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2883_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2883_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2887_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2887_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2887_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2887_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2887_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2889_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2892_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2892_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2893_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2894_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2895_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1109_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2897_CustomAttributesCacheGenerator,
};
