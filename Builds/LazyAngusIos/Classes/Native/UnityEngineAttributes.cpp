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
extern TypeInfo* ExtensionAttribute_t750_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3288);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t750 * tmp;
		tmp = (ExtensionAttribute_t750 *)il2cpp_codegen_object_new (ExtensionAttribute_t750_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4093(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7597(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2632_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2632_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9826(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9826(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void LayerMask_t839_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void LayerMask_t839_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void LayerMask_t839_CustomAttributesCacheGenerator_LayerMask_t839_LayerMask_GetMask_m8448_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void RuntimePlatform_t2638_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void RuntimePlatform_t2638_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Coroutine_t894_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8454_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9621(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MeshFilter_t741_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_t481_Mesh_Internal_Create_m8528_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9621(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_vertices_m3943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_triangles_m3944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_enabled_m3794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_material_m3773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_material_m3775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_materials_m4042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_bounds_m3803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_get_width_m3433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_get_height_m3448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_get_dpi_m3555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Screen_t2653_CustomAttributesCacheGenerator_Screen_get_orientation_m3447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8555_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9621(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8556_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8556_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RenderTexture_t2654_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RenderTexture_t2654_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUILayer_t2657_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Gradient_t2660_CustomAttributesCacheGenerator_Gradient_Init_m8567(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Gradient_t2660_CustomAttributesCacheGenerator_Gradient_Cleanup_m8568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
void GUI_t656_CustomAttributesCacheGenerator_GUI_set_changed_m8580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_get_enabled_m8581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_set_enabled_m3466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8603(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUI_t656_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Label_m3444_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Box_m3460_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Button_m3442_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_TextField_m3445_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_TextField_m3881_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Toggle_m3490_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_SelectionGrid_m3488_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_SelectionGrid_m8619_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginHorizontal_m3443_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginHorizontal_m8620_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginVertical_m3457_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginVertical_m8621_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginScrollView_m3465_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginScrollView_m8622_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUILayoutUtility_t655_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUILayoutUtility_t655_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void GUILayoutUtility_t655_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9957(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayoutUtility_t655_CustomAttributesCacheGenerator_GUILayoutUtility_t655_GUILayoutUtility_GetRect_m8643_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void GUILayoutUtility_t655_CustomAttributesCacheGenerator_GUILayoutUtility_t655_GUILayoutUtility_GetRect_m8645_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIClip_t2676_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIClip_t2676_CustomAttributesCacheGenerator_GUIClip_Pop_m8713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISettings_t2677_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISettings_t2677_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISettings_t2677_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISettings_t2677_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISettings_t2677_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t1058_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t1058_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1834);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t1058 * tmp;
		tmp = (ExecuteInEditMode_t1058 *)il2cpp_codegen_object_new (ExecuteInEditMode_t1058_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m6013(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUISkin_t732_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUIContent_t734_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUIContent_t734_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void GUIContent_t734_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyleState_t677_CustomAttributesCacheGenerator_GUIStyleState_Init_m8782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyleState_t677_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyleState_t677_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyleState_t677_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_Init_m8788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_left_m5921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_set_left_m8790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_right_m8791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_set_right_m8792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_top_m5922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_set_top_m8793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8824_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
void Event_t735_CustomAttributesCacheGenerator_Event_Init_m8845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_Cleanup_m8847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_get_rawType_m5781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_get_type_m3889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_get_modifiers_m5777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_get_character_m5779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_get_commandName_m8853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_get_keyCode_m5778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_Use_m8856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Event_t735_CustomAttributesCacheGenerator_Event_PopEvent_m5782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
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
		FlagsAttribute_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1048 * tmp;
		tmp = (FlagsAttribute_t1048 *)il2cpp_codegen_object_new (FlagsAttribute_t1048_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5958(tmp, NULL);
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
void Color32_t707_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2788 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2788 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2788_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m9613(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t736_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void Quaternion_t736_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Quaternion_t736_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Quaternion_t736_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
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
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Bounds_t717_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Bounds_t717_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Bounds_t717_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Bounds_t717_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8953(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t986_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void Mathf_t679_CustomAttributesCacheGenerator_Mathf_t679_Mathf_SmoothDamp_m5840_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Mathf_t679_CustomAttributesCacheGenerator_Mathf_t679_Mathf_SmoothDamp_m5840_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1048_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2688_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1048 * tmp;
		tmp = (FlagsAttribute_t1048 *)il2cpp_codegen_object_new (FlagsAttribute_t1048_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5958(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8990(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void Resources_t739_CustomAttributesCacheGenerator_Resources_Load_m9000(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9826(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextAsset_t731_CustomAttributesCacheGenerator_TextAsset_get_text_m3872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2692_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Shader_t2693_CustomAttributesCacheGenerator_Shader_PropertyToID_m9003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_SetTexture_m9008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_GetTexture_m9010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_SetFloat_m9012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_HasProperty_m9013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_t482_Material_Internal_CreateWithMaterial_m9014_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9621(tmp, NULL);
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
void SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_rect_m5708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_texture_m5701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_border_m5702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SpriteRenderer_t612_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void SpriteRenderer_t612_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9040_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9045(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9048_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9050_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9050_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_URLEncode_m9054_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_QPEncode_m9056_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_SevenBitClean_m9059_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void CacheIndex_t2698_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void UnityString_t2699_CustomAttributesCacheGenerator_UnityString_t2699_UnityString_Format_m9061_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AsyncOperation_t2633_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_isPlaying_m5820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_isEditor_m5822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_platform_m3541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_t1463_Application_ExternalCall_m3839_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_t1463_Application_BuildInvocationForArguments_m9072_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_OpenURL_m3732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void Application_t1463_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
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
		SecurityCriticalAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2916 * tmp;
		tmp = (SecurityCriticalAttribute_t2916 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2916_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m9961(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_get_enabled_m4023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5603(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_depth_m5517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_eventMask_m9082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_main_m3779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
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
		EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2146 * tmp;
		tmp = (EditorBrowsableAttribute_t2146 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7894(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Debug_t2701_CustomAttributesCacheGenerator_Debug_Internal_Log_m9102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void Debug_t2701_CustomAttributesCacheGenerator_Debug_t2701_Debug_Internal_Log_m9102_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9621(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Debug_t2701_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void Debug_t2701_CustomAttributesCacheGenerator_Debug_t2701_Debug_Internal_LogException_m9103_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9621(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Debug_t2701_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Display_t2704_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_GetAxis_m4080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_GetButtonDown_m5594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_GetMouseButton_m3986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_get_mousePosition_m3780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_get_mousePresent_m5593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_GetTouch_m3462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_get_touchCount_m3461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_get_compositionString_m5759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Input_t658_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1048_il2cpp_TypeInfo_var;
void HideFlags_t2707_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1048 * tmp;
		tmp = (FlagsAttribute_t1048 *)il2cpp_codegen_object_new (FlagsAttribute_t1048_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5958(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_Destroy_m9145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_t654_Object_Destroy_m9145_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_Destroy_m3672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_t654_Object_DestroyImmediate_m9146_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9826(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_get_name_m3529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_set_name_m5882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_set_hideFlags_m5793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_ToString_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_Instantiate_m3913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9826(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void Object_t654_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9826(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Component_t713_CustomAttributesCacheGenerator_Component_get_transform_m3808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Component_t713_CustomAttributesCacheGenerator_Component_get_gameObject_m3528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void Component_t713_CustomAttributesCacheGenerator_Component_GetComponent_m5928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9826(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Component_t713_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void Component_t713_CustomAttributesCacheGenerator_Component_GetComponent_m9964(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9957(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Component_t713_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9826(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9957(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9826(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9162_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9162_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2848 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2848 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2848_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9826(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2794_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9165_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2794 * tmp;
		tmp = (WritableAttribute_t2794 *)il2cpp_codegen_object_new (WritableAttribute_t2794_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9621(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9183_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_get_time_m3934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_get_deltaTime_m3956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_set_timeScale_m3733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Time_t2709_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m3970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Random_t2710_CustomAttributesCacheGenerator_Random_set_seed_m4009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Random_t2710_CustomAttributesCacheGenerator_Random_Range_m3954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Random_t2710_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_t2712_PlayerPrefs_GetString_m7485_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void LocalNotification_t2713_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RemoteNotification_t2714_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9202(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m9234_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m9234_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_Raycast_m3783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m5681_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m5681_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m5619_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m5619_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m9235_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m9235_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics_t2718_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Collider_t716_CustomAttributesCacheGenerator_Collider_set_enabled_m3795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Collider_t716_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_t745_Physics2D_IgnoreLayerCollision_m3987_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9241(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_Raycast_m5682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_t745_Physics2D_Raycast_m9242_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_t745_Physics2D_Raycast_m9242_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_t745_Physics2D_Raycast_m9242_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_t745_Physics2D_Raycast_m9242_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9243(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Collider2D_t578_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Collider2D_t578_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9246(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_set_clip_m3771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Play_m9262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_t570_AudioSource_Play_m9262_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Play_m4044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Stop_m3772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4045(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2845_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_t570_AudioSource_PlayOneShot_m9263_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2845 * tmp;
		tmp = (DefaultValueAttribute_t2845 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2845_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9821(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2846 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2846 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2846_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9825(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void AnimationEvent_t2729_CustomAttributesCacheGenerator_AnimationEvent_t2729____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
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
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_t2733_AnimationCurve__ctor_m9289_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_Init_m9293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2730_CustomAttributesCacheGenerator_AnimatorStateInfo_t2730____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Animator_t620_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Animator_t620_CustomAttributesCacheGenerator_Animator_StringToHash_m9312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Animator_t620_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9313(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Animator_t620_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Animator_t620_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void CharacterInfo_t2739_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void CharacterInfo_t2739_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void CharacterInfo_t2739_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t754_il2cpp_TypeInfo_var;
void CharacterInfo_t2739_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t754 * tmp;
		tmp = (ObsoleteAttribute_t754 *)il2cpp_codegen_object_new (ObsoleteAttribute_t754_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4200(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Font_t854_CustomAttributesCacheGenerator_Font_get_material_m5886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Font_t854_CustomAttributesCacheGenerator_Font_HasCharacter_m5780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Font_t854_CustomAttributesCacheGenerator_Font_get_dynamic_m5888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Font_t854_CustomAttributesCacheGenerator_Font_get_fontSize_m5889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2740_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2146 * tmp;
		tmp = (EditorBrowsableAttribute_t2146 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7894(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_Init_m9343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void Canvas_t629_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasGroup_t1008_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasGroup_t1008_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasGroup_t1008_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2787_il2cpp_TypeInfo_var;
void RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2787 * tmp;
		tmp = (WrapperlessIcall_t2787 *)il2cpp_codegen_object_new (WrapperlessIcall_t2787_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9612(tmp, NULL);
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
void Request_t2744_CustomAttributesCacheGenerator_Request_get_sourceId_m9382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2744_CustomAttributesCacheGenerator_Request_get_appId_m9383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2744_CustomAttributesCacheGenerator_Request_get_domain_m9384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void Response_t2746_CustomAttributesCacheGenerator_Response_get_success_m9393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2746_CustomAttributesCacheGenerator_Response_set_success_m9394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2746_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2746_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void DestroyMatchRequest_t2753_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2753_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_name_m9479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_name_m9480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void ListMatchResponse_t2760_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2760_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
		DefaultValueAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4472);
		AppID_t2761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4373);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2918 * tmp;
		tmp = (DefaultValueAttribute_t2918 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2918_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9979(tmp, Box(AppID_t2761_il2cpp_TypeInfo_var, &_tmp_0), NULL);
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
		DefaultValueAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4472);
		SourceID_t2762_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4372);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2918 * tmp;
		tmp = (DefaultValueAttribute_t2918 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2918_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9979(tmp, Box(SourceID_t2762_il2cpp_TypeInfo_var, &_tmp_0), NULL);
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
		DefaultValueAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4472);
		NetworkID_t2763_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4375);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2918 * tmp;
		tmp = (DefaultValueAttribute_t2918 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2918_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9979(tmp, Box(NetworkID_t2763_il2cpp_TypeInfo_var, &_tmp_0), NULL);
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
		DefaultValueAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4472);
		NodeID_t2764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4376);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2918 * tmp;
		tmp = (DefaultValueAttribute_t2918 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2918_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9979(tmp, Box(NodeID_t2764_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2769_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9980(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9986(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9987(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9989(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9990(CustomAttributesCache* cache)
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
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4473);
		EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9991(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2146 * tmp;
		tmp = (EditorBrowsableAttribute_t2146 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7894(tmp, 1, NULL);
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
		EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3292);
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4473);
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
		EditorBrowsableAttribute__ctor_m7894(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9991(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var;
void SimpleJson_t2774_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9991(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var;
void SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2922 * tmp;
		tmp = (SuppressMessageAttribute_t2922 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9992(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9993(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var;
void SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2922 * tmp;
		tmp = (SuppressMessageAttribute_t2922 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9992(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var;
void SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_t2774____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2146 * tmp;
		tmp = (EditorBrowsableAttribute_t2146 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2146_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7894(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9991(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2922 * tmp;
		tmp = (SuppressMessageAttribute_t2922 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9992(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9993(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9991(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2922 * tmp;
		tmp = (SuppressMessageAttribute_t2922 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9992(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9993(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2922 * tmp;
		tmp = (SuppressMessageAttribute_t2922 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2922_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9992(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9993(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var;
void ReflectionUtils_t2786_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2921 * tmp;
		tmp = (GeneratedCodeAttribute_t2921 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2921_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9991(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetConstructorInfo_m9596_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetContructor_m9601_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetConstructorByReflection_m9603_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
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
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2780_CustomAttributesCacheGenerator_ConstructorDelegate_t2780_ConstructorDelegate_Invoke_m9581_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t751_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2780_CustomAttributesCacheGenerator_ConstructorDelegate_t2780_ConstructorDelegate_BeginInvoke_m9582_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t751 * tmp;
		tmp = (ParamArrayAttribute_t751 *)il2cpp_codegen_object_new (ParamArrayAttribute_t751_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4112(tmp, NULL);
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
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2788_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1059_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7756(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void RequireComponent_t1053_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7757(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void WritableAttribute_t2794_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7757(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2795_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void GUIStateObjects_t2806_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9957(tmp, NULL);
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
void Achievement_t2809_CustomAttributesCacheGenerator_Achievement_get_id_m9658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2809_CustomAttributesCacheGenerator_Achievement_set_id_m9659(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2809_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2809_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void AchievementDescription_t2810_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2810_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void Score_t2811_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2811_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2811_CustomAttributesCacheGenerator_Score_get_value_m9680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2811_CustomAttributesCacheGenerator_Score_set_value_m9681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
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
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_id_m9689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_id_m9690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_range_m9693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_range_m9694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7756(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7757(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void TooltipAttribute_t1062_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7756(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7757(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void SpaceAttribute_t1060_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7756(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7757(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void RangeAttribute_t1057_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7756(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7757(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1063_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7756(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7757(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1061_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7756(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7757(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9957(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9957(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2915 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9957(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2827_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7757(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void ArgumentCache_t2834_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
void PersistentCall_t2838_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
void PersistentCall_t2838_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void PersistentCall_t2838_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void PersistentCall_t2838_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
void PersistentCall_t2838_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2840_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void UnityEventBase_t2843_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1051 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1051 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1051_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5977(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t752_il2cpp_TypeInfo_var;
void UnityEventBase_t2843_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t752 * tmp;
		tmp = (SerializeField_t752 *)il2cpp_codegen_object_new (SerializeField_t752_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4113(tmp, NULL);
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
		AddComponentMenu_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1050 * tmp;
		tmp = (AddComponentMenu_t1050 *)il2cpp_codegen_object_new (AddComponentMenu_t1050_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m5976(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2845_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2846_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1051_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7757(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m7756(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t755_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2848_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t755 * tmp;
		tmp = (AttributeUsageAttribute_t755 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t755_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4230(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[815] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2632_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8436,
	AssetBundleCreateRequest_t2632_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8437,
	AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8441,
	AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8442,
	AssetBundle_t2634_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8443,
	LayerMask_t839_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8446,
	LayerMask_t839_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8447,
	LayerMask_t839_CustomAttributesCacheGenerator_LayerMask_t839_LayerMask_GetMask_m8448_Arg0_ParameterInfo,
	RuntimePlatform_t2638_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t2638_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t2638_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4088,
	SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8449,
	SystemInfo_t2639_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7532,
	Coroutine_t894_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8452,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8454,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8454_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8455,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8457,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8462,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8463,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8464,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8465,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8466,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8467,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8468,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8469,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8470,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8471,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8472,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8473,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8474,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8475,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8476,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8477,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8478,
	GameCenterPlatform_t749_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8480,
	GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8524,
	GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8525,
	GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8526,
	GcLeaderboard_t2651_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8527,
	MeshFilter_t741_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3942,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8528,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_t481_Mesh_Internal_Create_m8528_Arg0_ParameterInfo,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_vertices_m3943,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_triangles_m3944,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_enabled_m3794,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_material_m3773,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_material_m3775,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_materials_m4042,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_bounds_m3803,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5613,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5614,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_get_width_m3433,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_get_height_m3448,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_get_dpi_m3555,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3868,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3869,
	Screen_t2653_CustomAttributesCacheGenerator_Screen_get_orientation_m3447,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8550,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8551,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8555,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8555_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5655,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5730,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8556,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8556_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8556_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3473,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3472,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8557,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3474,
	RenderTexture_t2654_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8558,
	RenderTexture_t2654_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8559,
	GUILayer_t2657_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8563,
	Gradient_t2660_CustomAttributesCacheGenerator_Gradient_Init_m8567,
	Gradient_t2660_CustomAttributesCacheGenerator_Gradient_Cleanup_m8568,
	GUI_t656_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t656_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t656_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8575,
	GUI_t656_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8576,
	GUI_t656_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8577,
	GUI_t656_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8578,
	GUI_t656_CustomAttributesCacheGenerator_GUI_set_changed_m8580,
	GUI_t656_CustomAttributesCacheGenerator_GUI_get_enabled_m8581,
	GUI_t656_CustomAttributesCacheGenerator_GUI_set_enabled_m3466,
	GUI_t656_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8583,
	GUI_t656_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8586,
	GUI_t656_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8589,
	GUI_t656_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8596,
	GUI_t656_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8603,
	GUI_t656_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8605,
	GUI_t656_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8612,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Label_m3444_Arg1_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Box_m3460_Arg1_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Button_m3442_Arg1_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_TextField_m3445_Arg1_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_TextField_m3881_Arg2_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_Toggle_m3490_Arg2_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_SelectionGrid_m3488_Arg3_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_SelectionGrid_m8619_Arg4_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginHorizontal_m3443_Arg0_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginHorizontal_m8620_Arg2_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginVertical_m3457_Arg0_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginVertical_m8621_Arg2_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginScrollView_m3465_Arg1_ParameterInfo,
	GUILayout_t2663_CustomAttributesCacheGenerator_GUILayout_t2663_GUILayout_BeginScrollView_m8622_Arg6_ParameterInfo,
	GUILayoutUtility_t655_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8637,
	GUILayoutUtility_t655_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8639,
	GUILayoutUtility_t655_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8640,
	GUILayoutUtility_t655_CustomAttributesCacheGenerator_GUILayoutUtility_t655_GUILayoutUtility_GetRect_m8643_Arg2_ParameterInfo,
	GUILayoutUtility_t655_CustomAttributesCacheGenerator_GUILayoutUtility_t655_GUILayoutUtility_GetRect_m8645_Arg3_ParameterInfo,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8687,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8691,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8695,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8696,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8697,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8698,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8699,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8700,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8702,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8704,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8708,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8709,
	GUIUtility_t2675_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8710,
	GUIClip_t2676_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8712,
	GUIClip_t2676_CustomAttributesCacheGenerator_GUIClip_Pop_m8713,
	GUISettings_t2677_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2677_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2677_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2677_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2677_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t732_CustomAttributesCacheGenerator,
	GUISkin_t732_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t732_CustomAttributesCacheGenerator_m_box,
	GUISkin_t732_CustomAttributesCacheGenerator_m_button,
	GUISkin_t732_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t732_CustomAttributesCacheGenerator_m_label,
	GUISkin_t732_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t732_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t732_CustomAttributesCacheGenerator_m_window,
	GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t732_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t732_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t732_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t732_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t732_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t732_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t732_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t732_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t732_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t732_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t734_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t734_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t734_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t677_CustomAttributesCacheGenerator_GUIStyleState_Init_m8782,
	GUIStyleState_t677_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8783,
	GUIStyleState_t677_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8784,
	GUIStyleState_t677_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8785,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_Init_m8788,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8789,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_left_m5921,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_set_left_m8790,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_right_m8791,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_set_right_m8792,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_top_m5922,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_set_top_m8793,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3892,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8794,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5915,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5916,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8796,
	RectOffset_t651_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8798,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8802,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8803,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8804,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8805,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8806,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8807,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8809,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8810,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8811,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3434,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8812,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3435,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8813,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8814,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8815,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3439,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8816,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3438,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8817,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3535,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3536,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8820,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8823,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8824_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8826,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8827,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8831,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8833,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8835,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8838,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8841,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8843,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5817,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5818,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg1_ParameterInfo,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg2_ParameterInfo,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg3_ParameterInfo,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg4_ParameterInfo,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg5_ParameterInfo,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_t889_TouchScreenKeyboard_Open_m8844_Arg6_ParameterInfo,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5757,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5758,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5816,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5756,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5815,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5768,
	TouchScreenKeyboard_t889_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5767,
	Event_t735_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t735_CustomAttributesCacheGenerator_Event_Init_m8845,
	Event_t735_CustomAttributesCacheGenerator_Event_Cleanup_m8847,
	Event_t735_CustomAttributesCacheGenerator_Event_get_rawType_m5781,
	Event_t735_CustomAttributesCacheGenerator_Event_get_type_m3889,
	Event_t735_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8848,
	Event_t735_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8850,
	Event_t735_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8852,
	Event_t735_CustomAttributesCacheGenerator_Event_get_modifiers_m5777,
	Event_t735_CustomAttributesCacheGenerator_Event_get_character_m5779,
	Event_t735_CustomAttributesCacheGenerator_Event_get_commandName_m8853,
	Event_t735_CustomAttributesCacheGenerator_Event_get_keyCode_m5778,
	Event_t735_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8854,
	Event_t735_CustomAttributesCacheGenerator_Event_Use_m8856,
	Event_t735_CustomAttributesCacheGenerator_Event_PopEvent_m5782,
	EventModifiers_t2686_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t496_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t707_CustomAttributesCacheGenerator,
	Quaternion_t736_CustomAttributesCacheGenerator,
	Quaternion_t736_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8882,
	Quaternion_t736_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8885,
	Quaternion_t736_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8887,
	Matrix4x4_t1026_CustomAttributesCacheGenerator,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8903,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8905,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8907,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8910,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8922,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8925,
	Matrix4x4_t1026_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8926,
	Bounds_t717_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8943,
	Bounds_t717_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8946,
	Bounds_t717_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8949,
	Bounds_t717_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8953,
	Vector4_t986_CustomAttributesCacheGenerator,
	Mathf_t679_CustomAttributesCacheGenerator_Mathf_t679_Mathf_SmoothDamp_m5840_Arg4_ParameterInfo,
	Mathf_t679_CustomAttributesCacheGenerator_Mathf_t679_Mathf_SmoothDamp_m5840_Arg5_ParameterInfo,
	DrivenTransformProperties_t2688_CustomAttributesCacheGenerator,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8984,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8985,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8986,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8987,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8988,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8989,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8990,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8991,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8992,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8993,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8994,
	Resources_t739_CustomAttributesCacheGenerator_Resources_Load_m9000,
	TextAsset_t731_CustomAttributesCacheGenerator_TextAsset_get_text_m3872,
	SerializePrivateVariables_t2692_CustomAttributesCacheGenerator,
	Shader_t2693_CustomAttributesCacheGenerator_Shader_PropertyToID_m9003,
	Material_t482_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9006,
	Material_t482_CustomAttributesCacheGenerator_Material_SetTexture_m9008,
	Material_t482_CustomAttributesCacheGenerator_Material_GetTexture_m9010,
	Material_t482_CustomAttributesCacheGenerator_Material_SetFloat_m9012,
	Material_t482_CustomAttributesCacheGenerator_Material_HasProperty_m9013,
	Material_t482_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9014,
	Material_t482_CustomAttributesCacheGenerator_Material_t482_Material_Internal_CreateWithMaterial_m9014_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9017,
	SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9020,
	SphericalHarmonicsL2_t2694_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9023,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_rect_m5708,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5704,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_texture_m5701,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5727,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_border_m5702,
	SpriteRenderer_t612_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9033,
	SpriteRenderer_t612_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9034,
	DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5715,
	DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5714,
	DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5707,
	DataUtility_t2695_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9035,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9038,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9039,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3955,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9040_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9041,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9044,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3626,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9045,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7490,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7496,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3477,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9048_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3476,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9050_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9050_Arg3_ParameterInfo,
	WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_URLEncode_m9054_Arg1_ParameterInfo,
	WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_QPEncode_m9056_Arg1_ParameterInfo,
	WWWTranscoder_t2697_CustomAttributesCacheGenerator_WWWTranscoder_t2697_WWWTranscoder_SevenBitClean_m9059_Arg1_ParameterInfo,
	CacheIndex_t2698_CustomAttributesCacheGenerator,
	UnityString_t2699_CustomAttributesCacheGenerator_UnityString_t2699_UnityString_Format_m9061_Arg1_ParameterInfo,
	AsyncOperation_t2633_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9063,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3527,
	Application_t1463_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9070,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_isPlaying_m5820,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_isEditor_m5822,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3838,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_platform_m3541,
	Application_t1463_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4051,
	Application_t1463_CustomAttributesCacheGenerator_Application_t1463_Application_ExternalCall_m3839_Arg1_ParameterInfo,
	Application_t1463_CustomAttributesCacheGenerator_Application_t1463_Application_BuildInvocationForArguments_m9072_Arg1_ParameterInfo,
	Application_t1463_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9073,
	Application_t1463_CustomAttributesCacheGenerator_Application_OpenURL_m3732,
	Application_t1463_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9075,
	Application_t1463_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1463_CustomAttributesCacheGenerator_Application_t1463____persistentDataPath_PropertyInfo,
	Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_get_enabled_m4023,
	Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5790,
	Behaviour_t1036_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5552,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5604,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5603,
	Camera_t532_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4067,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_depth_m5517,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5617,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_eventMask_m9082,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9083,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9084,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9085,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9087,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9088,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9089,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9090,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9091,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9092,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_main_m3779,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9093,
	Camera_t532_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9094,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9099,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9101,
	CameraCallback_t2700_CustomAttributesCacheGenerator,
	Debug_t2701_CustomAttributesCacheGenerator_Debug_Internal_Log_m9102,
	Debug_t2701_CustomAttributesCacheGenerator_Debug_t2701_Debug_Internal_Log_m9102_Arg2_ParameterInfo,
	Debug_t2701_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9103,
	Debug_t2701_CustomAttributesCacheGenerator_Debug_t2701_Debug_Internal_LogException_m9103_Arg1_ParameterInfo,
	Debug_t2701_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3837,
	Display_t2704_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9128,
	Display_t2704_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9129,
	Display_t2704_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9130,
	Display_t2704_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9131,
	Display_t2704_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9132,
	Display_t2704_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9133,
	Display_t2704_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9134,
	Display_t2704_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9135,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3787,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3786,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9136,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9137,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9138,
	Input_t658_CustomAttributesCacheGenerator_Input_GetAxis_m4080,
	Input_t658_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5595,
	Input_t658_CustomAttributesCacheGenerator_Input_GetButtonDown_m5594,
	Input_t658_CustomAttributesCacheGenerator_Input_GetMouseButton_m3986,
	Input_t658_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3782,
	Input_t658_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3985,
	Input_t658_CustomAttributesCacheGenerator_Input_get_mousePosition_m3780,
	Input_t658_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5568,
	Input_t658_CustomAttributesCacheGenerator_Input_get_mousePresent_m5593,
	Input_t658_CustomAttributesCacheGenerator_Input_GetTouch_m3462,
	Input_t658_CustomAttributesCacheGenerator_Input_get_touchCount_m3461,
	Input_t658_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5819,
	Input_t658_CustomAttributesCacheGenerator_Input_get_compositionString_m5759,
	Input_t658_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9140,
	HideFlags_t2707_CustomAttributesCacheGenerator,
	Object_t654_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9142,
	Object_t654_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9144,
	Object_t654_CustomAttributesCacheGenerator_Object_Destroy_m9145,
	Object_t654_CustomAttributesCacheGenerator_Object_t654_Object_Destroy_m9145_Arg1_ParameterInfo,
	Object_t654_CustomAttributesCacheGenerator_Object_Destroy_m3672,
	Object_t654_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9146,
	Object_t654_CustomAttributesCacheGenerator_Object_t654_Object_DestroyImmediate_m9146_Arg1_ParameterInfo,
	Object_t654_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5821,
	Object_t654_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9147,
	Object_t654_CustomAttributesCacheGenerator_Object_get_name_m3529,
	Object_t654_CustomAttributesCacheGenerator_Object_set_name_m5882,
	Object_t654_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t654_CustomAttributesCacheGenerator_Object_set_hideFlags_m5793,
	Object_t654_CustomAttributesCacheGenerator_Object_ToString_m525,
	Object_t654_CustomAttributesCacheGenerator_Object_Instantiate_m3913,
	Object_t654_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9153,
	Component_t713_CustomAttributesCacheGenerator_Component_get_transform_m3808,
	Component_t713_CustomAttributesCacheGenerator_Component_get_gameObject_m3528,
	Component_t713_CustomAttributesCacheGenerator_Component_GetComponent_m5928,
	Component_t713_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9155,
	Component_t713_CustomAttributesCacheGenerator_Component_GetComponent_m9964,
	Component_t713_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9156,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9158,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9159,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9968,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9160,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9161,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3811,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5795,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5796,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3728,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4065,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4083,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3981,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9162,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9162_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9162_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9163,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9164,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9165,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9165_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9170,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9171,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9172,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9173,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9174,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9175,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9176,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9177,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9178,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9179,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9180,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9181,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3914,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9182,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4059,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9183_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9184,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9185,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4064,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5794,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3915,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4063,
	Time_t2709_CustomAttributesCacheGenerator_Time_get_time_m3934,
	Time_t2709_CustomAttributesCacheGenerator_Time_get_deltaTime_m3956,
	Time_t2709_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5597,
	Time_t2709_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5629,
	Time_t2709_CustomAttributesCacheGenerator_Time_set_timeScale_m3733,
	Time_t2709_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m3970,
	Random_t2710_CustomAttributesCacheGenerator_Random_set_seed_m4009,
	Random_t2710_CustomAttributesCacheGenerator_Random_Range_m3954,
	Random_t2710_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9187,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9190,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7485,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_t2712_PlayerPrefs_GetString_m7485_Arg1_ParameterInfo,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3692,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3691,
	PlayerPrefs_t2712_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7488,
	LocalNotification_t2713_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9192,
	RemoteNotification_t2714_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9194,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9197,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9198,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9200,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9201,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9202,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9203,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9204,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9205,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9206,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9208,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9209,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9211,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9212,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9213,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9214,
	NotificationServices_t2716_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9215,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9233,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m9234_Arg3_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m9234_Arg4_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_Raycast_m3783,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m5681_Arg2_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_Raycast_m5681_Arg3_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m5619_Arg1_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m5619_Arg2_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m9235_Arg2_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_t2718_Physics_RaycastAll_m9235_Arg3_ParameterInfo,
	Physics_t2718_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9236,
	Collider_t716_CustomAttributesCacheGenerator_Collider_set_enabled_m3795,
	Collider_t716_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9237,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3987,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_t745_Physics2D_IgnoreLayerCollision_m3987_Arg2_ParameterInfo,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9241,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_Raycast_m5682,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_t745_Physics2D_Raycast_m9242_Arg2_ParameterInfo,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_t745_Physics2D_Raycast_m9242_Arg3_ParameterInfo,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_t745_Physics2D_Raycast_m9242_Arg4_ParameterInfo,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_t745_Physics2D_Raycast_m9242_Arg5_ParameterInfo,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5607,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9243,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3980,
	Physics2D_t745_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9244,
	Collider2D_t578_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4048,
	Collider2D_t578_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9246,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_set_clip_m3771,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Play_m9262,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_t570_AudioSource_Play_m9262_Arg0_ParameterInfo,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Play_m4044,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4062,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Stop_m3772,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4045,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9263,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_t570_AudioSource_PlayOneShot_m9263_Arg1_ParameterInfo,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3785,
	AnimationEvent_t2729_CustomAttributesCacheGenerator_AnimationEvent_t2729____data_PropertyInfo,
	AnimationCurve_t2733_CustomAttributesCacheGenerator,
	AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_t2733_AnimationCurve__ctor_m9289_Arg0_ParameterInfo,
	AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9291,
	AnimationCurve_t2733_CustomAttributesCacheGenerator_AnimationCurve_Init_m9293,
	AnimatorStateInfo_t2730_CustomAttributesCacheGenerator_AnimatorStateInfo_t2730____nameHash_PropertyInfo,
	Animator_t620_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5874,
	Animator_t620_CustomAttributesCacheGenerator_Animator_StringToHash_m9312,
	Animator_t620_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9313,
	Animator_t620_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9314,
	Animator_t620_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9315,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3777,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3778,
	CharacterInfo_t2739_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2739_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2739_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2739_CustomAttributesCacheGenerator_flipped,
	Font_t854_CustomAttributesCacheGenerator_Font_get_material_m5886,
	Font_t854_CustomAttributesCacheGenerator_Font_HasCharacter_m5780,
	Font_t854_CustomAttributesCacheGenerator_Font_get_dynamic_m5888,
	Font_t854_CustomAttributesCacheGenerator_Font_get_fontSize_m5889,
	FontTextureRebuildCallback_t2740_CustomAttributesCacheGenerator,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_Init_m9343,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9344,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9347,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5792,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9348,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9349,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9350,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9351,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9352,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9353,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5773,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9354,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9355,
	TextGenerator_t892_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5808,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5678,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5903,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3965,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9366,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4091,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5906,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5705,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5907,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5665,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5680,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5679,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5686,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5652,
	Canvas_t629_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5885,
	CanvasGroup_t1008_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5866,
	CanvasGroup_t1008_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9368,
	CanvasGroup_t1008_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5664,
	CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9371,
	CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5668,
	CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5938,
	CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5660,
	CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9372,
	CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9373,
	CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5656,
	CanvasRenderer_t859_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5653,
	RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9375,
	RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9377,
	RectTransformUtility_t1010_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5667,
	Request_t2744_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2744_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2744_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2744_CustomAttributesCacheGenerator_Request_get_sourceId_m9382,
	Request_t2744_CustomAttributesCacheGenerator_Request_get_appId_m9383,
	Request_t2744_CustomAttributesCacheGenerator_Request_get_domain_m9384,
	Response_t2746_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2746_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2746_CustomAttributesCacheGenerator_Response_get_success_m9393,
	Response_t2746_CustomAttributesCacheGenerator_Response_set_success_m9394,
	Response_t2746_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9395,
	Response_t2746_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9396,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9401,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9402,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9403,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9404,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9405,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9406,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9407,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9408,
	CreateMatchRequest_t2749_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9409,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9412,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9413,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9414,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9415,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9416,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9417,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9418,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9419,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9420,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9421,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9422,
	CreateMatchResponse_t2750_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9423,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9427,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9428,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9429,
	JoinMatchRequest_t2751_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9430,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9433,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9434,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9435,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9436,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9437,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9438,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9439,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9440,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9441,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9442,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9443,
	JoinMatchResponse_t2752_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9444,
	DestroyMatchRequest_t2753_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2753_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9448,
	DestroyMatchRequest_t2753_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9449,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9452,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9453,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9454,
	DropConnectionRequest_t2754_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9455,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9458,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9459,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9460,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9461,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9462,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9463,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9464,
	ListMatchRequest_t2755_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9465,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9468,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9469,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9470,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9471,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9472,
	MatchDirectConnectInfo_t2756_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9473,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9477,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9478,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_name_m9479,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_name_m9480,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9481,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9482,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9483,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9484,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9485,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9486,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9487,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9488,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9489,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9490,
	MatchDesc_t2758_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9491,
	ListMatchResponse_t2760_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2760_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9495,
	ListMatchResponse_t2760_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9496,
	AppID_t2761_CustomAttributesCacheGenerator,
	SourceID_t2762_CustomAttributesCacheGenerator,
	NetworkID_t2763_CustomAttributesCacheGenerator,
	NodeID_t2764_CustomAttributesCacheGenerator,
	NetworkMatch_t2769_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9980,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9986,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9987,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9989,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2920_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9990,
	JsonArray_t2770_CustomAttributesCacheGenerator,
	JsonObject_t2771_CustomAttributesCacheGenerator,
	SimpleJson_t2774_CustomAttributesCacheGenerator,
	SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9541,
	SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9553,
	SimpleJson_t2774_CustomAttributesCacheGenerator_SimpleJson_t2774____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9994,
	PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9570,
	PocoJsonSerializerStrategy_t2773_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9571,
	ReflectionUtils_t2786_CustomAttributesCacheGenerator,
	ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetConstructorInfo_m9596_Arg1_ParameterInfo,
	ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetContructor_m9601_Arg1_ParameterInfo,
	ReflectionUtils_t2786_CustomAttributesCacheGenerator_ReflectionUtils_t2786_ReflectionUtils_GetConstructorByReflection_m9603_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2923_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2780_CustomAttributesCacheGenerator_ConstructorDelegate_t2780_ConstructorDelegate_Invoke_m9581_Arg0_ParameterInfo,
	ConstructorDelegate_t2780_CustomAttributesCacheGenerator_ConstructorDelegate_t2780_ConstructorDelegate_BeginInvoke_m9582_Arg0_ParameterInfo,
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
	GUIStateObjects_t2806_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9636,
	Achievement_t2809_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2809_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2809_CustomAttributesCacheGenerator_Achievement_get_id_m9658,
	Achievement_t2809_CustomAttributesCacheGenerator_Achievement_set_id_m9659,
	Achievement_t2809_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9660,
	Achievement_t2809_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9661,
	AchievementDescription_t2810_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2810_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9668,
	AchievementDescription_t2810_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9669,
	Score_t2811_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2811_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2811_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9678,
	Score_t2811_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9679,
	Score_t2811_CustomAttributesCacheGenerator_Score_get_value_m9680,
	Score_t2811_CustomAttributesCacheGenerator_Score_set_value_m9681,
	Leaderboard_t2650_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2650_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2650_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2650_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_id_m9689,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_id_m9690,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9691,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9692,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_range_m9693,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_range_m9694,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9695,
	Leaderboard_t2650_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9696,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1062_CustomAttributesCacheGenerator,
	SpaceAttribute_t1060_CustomAttributesCacheGenerator,
	RangeAttribute_t1057_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1063_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1061_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9740,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9742,
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
