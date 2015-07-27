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
extern TypeInfo* InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t698_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		ExtensionAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t48 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t48 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m224(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m225(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t698 * tmp;
		tmp = (ExtensionAttribute_t698 *)il2cpp_codegen_object_new (ExtensionAttribute_t698_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3721(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1056_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1056_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var;
void AssetBundle_t1058_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1273 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1273 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7120(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var;
void AssetBundle_t1058_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1273 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1273 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7120(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AssetBundle_t1058_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void LayerMask_t788_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void LayerMask_t788_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void LayerMask_t788_CustomAttributesCacheGenerator_LayerMask_t788_LayerMask_GetMask_m5770_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void RuntimePlatform_t1062_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void RuntimePlatform_t1062_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void RuntimePlatform_t1062_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void RuntimePlatform_t1062_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void RuntimePlatform_t1062_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void SystemInfo_t1063_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m3715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void SystemInfo_t1063_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Coroutine_t843_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t1217_il2cpp_TypeInfo_var;
void ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_t106_ScriptableObject_Internal_CreateScriptableObject_m5776_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1217 * tmp;
		tmp = (WritableAttribute_t1217 *)il2cpp_codegen_object_new (WritableAttribute_t1217_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6913(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GcLeaderboard_t1075_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GcLeaderboard_t1075_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GcLeaderboard_t1075_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GcLeaderboard_t1075_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void MeshFilter_t687_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Mesh_t437_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1217_il2cpp_TypeInfo_var;
void Mesh_t437_CustomAttributesCacheGenerator_Mesh_t437_Mesh_Internal_Create_m5850_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1217 * tmp;
		tmp = (WritableAttribute_t1217 *)il2cpp_codegen_object_new (WritableAttribute_t1217_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6913(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Mesh_t437_CustomAttributesCacheGenerator_Mesh_set_vertices_m3578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Mesh_t437_CustomAttributesCacheGenerator_Mesh_set_triangles_m3579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Renderer_t593_CustomAttributesCacheGenerator_Renderer_set_enabled_m3427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Renderer_t593_CustomAttributesCacheGenerator_Renderer_get_material_m3406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Renderer_t593_CustomAttributesCacheGenerator_Renderer_set_material_m3408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Renderer_t593_CustomAttributesCacheGenerator_Renderer_get_bounds_m3436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Renderer_t593_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Renderer_t593_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5245(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Screen_t1077_CustomAttributesCacheGenerator_Screen_get_width_m3062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Screen_t1077_CustomAttributesCacheGenerator_Screen_get_height_m3078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Screen_t1077_CustomAttributesCacheGenerator_Screen_get_dpi_m3187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Screen_t1077_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Screen_t1077_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Screen_t1077_CustomAttributesCacheGenerator_Screen_get_orientation_m3077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Texture_t352_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Texture_t352_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1217_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5877_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1217 * tmp;
		tmp = (WritableAttribute_t1217 *)il2cpp_codegen_object_new (WritableAttribute_t1217_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6913(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5286(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5362(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5878_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5878_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m3104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RenderTexture_t1078_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RenderTexture_t1078_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUILayer_t1081_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Gradient_t1084_CustomAttributesCacheGenerator_Gradient_Init_m5889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Gradient_t1084_CustomAttributesCacheGenerator_Gradient_Cleanup_m5890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_set_changed_m5902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_get_enabled_m5903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_set_enabled_m3096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUI_t601_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_Label_m3074_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_Box_m3090_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_Button_m3072_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_TextField_m3075_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_TextField_m3515_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_Toggle_m3121_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_SelectionGrid_m3119_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_SelectionGrid_m5941_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginHorizontal_m3073_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginHorizontal_m5942_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginVertical_m3087_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginVertical_m5943_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginScrollView_m3095_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginScrollView_m5944_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUILayoutUtility_t600_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUILayoutUtility_t600_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var;
void GUILayoutUtility_t600_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1352 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1352 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7257(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayoutUtility_t600_CustomAttributesCacheGenerator_GUILayoutUtility_t600_GUILayoutUtility_GetRect_m5965_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void GUILayoutUtility_t600_CustomAttributesCacheGenerator_GUILayoutUtility_t600_GUILayoutUtility_GetRect_m5967_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m6009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m6013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m6017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m6018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m6019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m6020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m6021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m6022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m6024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m6026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m6030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m6031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m6032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIClip_t1100_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m6034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIClip_t1100_CustomAttributesCacheGenerator_GUIClip_Pop_m6035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISettings_t1101_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISettings_t1101_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISettings_t1101_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISettings_t1101_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISettings_t1101_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t1006_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t1006_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t1006 * tmp;
		tmp = (ExecuteInEditMode_t1006 *)il2cpp_codegen_object_new (ExecuteInEditMode_t1006_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m5645(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUISkin_t678_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUIContent_t680_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUIContent_t680_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void GUIContent_t680_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyleState_t622_CustomAttributesCacheGenerator_GUIStyleState_Init_m6104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyleState_t622_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m6105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyleState_t622_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m6106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyleState_t622_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m6107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_Init_m6110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_Cleanup_m6111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_left_m5553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_set_left_m6112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_right_m6113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_set_right_m6114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_top_m5554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_set_top_m6115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_set_bottom_m6116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m6118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m6120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m6124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m6125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m6126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m6127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m6128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m6129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m6131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m6132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m6133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m6134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m6135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m6136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m6137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m6138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m6139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m6142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m6145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m6146_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m6148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m6149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m6153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m6155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m6157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m6160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m6163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m6165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_Init_m6167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_Cleanup_m6169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_get_rawType_m5413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_get_type_m3523(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_GetTypeForControl_m6170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m6172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m6174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_get_modifiers_m5409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_get_character_m5411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_get_commandName_m6175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_get_keyCode_m5410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m6176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_Use_m6178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Event_t681_CustomAttributesCacheGenerator_Event_PopEvent_m5414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t996_il2cpp_TypeInfo_var;
void EventModifiers_t1110_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t996_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t996 * tmp;
		tmp = (FlagsAttribute_t996 *)il2cpp_codegen_object_new (FlagsAttribute_t996_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5590(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Vector2_t68_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Vector3_t449_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Color_t283_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t1211_il2cpp_TypeInfo_var;
void Color32_t653_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t1211 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t1211 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t1211_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m6905(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Quaternion_t682_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Quaternion_t682_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m6204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Quaternion_t682_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m6207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Quaternion_t682_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m6209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Matrix4x4_t974_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m6225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m6227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m6229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m6232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m6244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m6247(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m6248(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Bounds_t663_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m6265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Bounds_t663_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m6268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Bounds_t663_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m6271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Bounds_t663_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m6275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Vector4_t935_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Mathf_t624_CustomAttributesCacheGenerator_Mathf_t624_Mathf_SmoothDamp_m5472_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Mathf_t624_CustomAttributesCacheGenerator_Mathf_t624_Mathf_SmoothDamp_m5472_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t996_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t1112_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t996_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t996 * tmp;
		tmp = (FlagsAttribute_t996 *)il2cpp_codegen_object_new (FlagsAttribute_t996_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5590(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m6306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m6307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m6308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m6309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m6310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m6311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m6312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m6313(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m6314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m6315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m6316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var;
void Resources_t685_CustomAttributesCacheGenerator_Resources_Load_m6322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1273 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1273 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7120(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextAsset_t677_CustomAttributesCacheGenerator_TextAsset_get_text_m3506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t1116_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Shader_t1117_CustomAttributesCacheGenerator_Shader_PropertyToID_m6325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_SetTexture_m6327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_GetTexture_m6329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_SetFloat_m6331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_HasProperty_m6332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m6333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1217_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_t438_Material_Internal_CreateWithMaterial_m6333_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1217 * tmp;
		tmp = (WritableAttribute_t1217 *)il2cpp_codegen_object_new (WritableAttribute_t1217_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6913(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1118_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1118_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m6336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1118_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m6339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1118_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m6342(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_rect_m5340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_texture_m5333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_border_m5334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void SpriteRenderer_t510_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m6352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void SpriteRenderer_t510_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m6353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void DataUtility_t1119_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void DataUtility_t1119_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void DataUtility_t1119_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void DataUtility_t1119_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m6354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_DestroyWWW_m6357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_InitWWW_m6358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_EscapeURL_m3591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_t223_WWW_EscapeURL_m6359_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m6360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_get_bytes_m6363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_get_error_m3259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_GetTexture_m6364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_get_isDone_m6365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m3108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m6368_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m6370_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m6370_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void WWWTranscoder_t1121_CustomAttributesCacheGenerator_WWWTranscoder_t1121_WWWTranscoder_URLEncode_m6374_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void WWWTranscoder_t1121_CustomAttributesCacheGenerator_WWWTranscoder_t1121_WWWTranscoder_QPEncode_m6376_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void WWWTranscoder_t1121_CustomAttributesCacheGenerator_WWWTranscoder_t1121_WWWTranscoder_SevenBitClean_m6379_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void CacheIndex_t1122_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void UnityString_t1123_CustomAttributesCacheGenerator_UnityString_t1123_UnityString_Format_m6381_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AsyncOperation_t1057_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m6383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m6388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_get_isPlaying_m5452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_get_isEditor_m5454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_get_platform_m3172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_t1124_Application_ExternalCall_m3472_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_t1124_Application_BuildInvocationForArguments_m6390_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m6391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_OpenURL_m3365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m6393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t1353_il2cpp_TypeInfo_var;
void Application_t1124_CustomAttributesCacheGenerator_Application_t1124____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t1353 * tmp;
		tmp = (SecurityCriticalAttribute_t1353 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t1353_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m7261(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Behaviour_t984_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Behaviour_t984_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Behaviour_t984_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_get_depth_m5147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5248(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_get_eventMask_m6399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m6400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m6401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m6402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_get_targetTexture_m6404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_get_clearFlags_m6405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m6406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m6407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m6408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m6409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m6410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_get_main_m3412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m6411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_GetAllCameras_m6412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m6417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m6419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var;
void CameraCallback_t1125_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1354 * tmp;
		tmp = (EditorBrowsableAttribute_t1354 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7262(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Debug_t1126_CustomAttributesCacheGenerator_Debug_Internal_Log_m6420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1217_il2cpp_TypeInfo_var;
void Debug_t1126_CustomAttributesCacheGenerator_Debug_t1126_Debug_Internal_Log_m6420_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1217 * tmp;
		tmp = (WritableAttribute_t1217 *)il2cpp_codegen_object_new (WritableAttribute_t1217_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6913(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Debug_t1126_CustomAttributesCacheGenerator_Debug_Internal_LogException_m6421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1217_il2cpp_TypeInfo_var;
void Debug_t1126_CustomAttributesCacheGenerator_Debug_t1126_Debug_Internal_LogException_m6421_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1217 * tmp;
		tmp = (WritableAttribute_t1217 *)il2cpp_codegen_object_new (WritableAttribute_t1217_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6913(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Debug_t1126_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Display_t1129_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m6447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Display_t1129_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m6448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Display_t1129_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m6449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Display_t1129_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m6450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Display_t1129_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m6451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Display_t1129_CustomAttributesCacheGenerator_Display_SetParamsImpl_m6452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Display_t1129_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m6453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Display_t1129_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m6454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m6455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m6457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_GetAxis_m3707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_GetButtonDown_m5225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_GetMouseButton_m3620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_get_mousePosition_m3413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_get_mousePresent_m5224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_GetTouch_m3092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_get_touchCount_m3091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_get_compositionString_m5391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Input_t603_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m6459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t996_il2cpp_TypeInfo_var;
void HideFlags_t1132_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t996_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t996 * tmp;
		tmp = (FlagsAttribute_t996 *)il2cpp_codegen_object_new (FlagsAttribute_t996_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5590(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m6462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_Destroy_m6463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_t599_Object_Destroy_m6463_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_Destroy_m3305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_t599_Object_DestroyImmediate_m6464_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m6465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1273 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1273 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7120(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_get_name_m3160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_set_name_m5514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m3190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_set_hideFlags_m5425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_ToString_m3878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_Instantiate_m3547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1273 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1273 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7120(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var;
void Object_t599_CustomAttributesCacheGenerator_Object_FindObjectOfType_m6471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1273 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1273 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7120(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Component_t659_CustomAttributesCacheGenerator_Component_get_transform_m3441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Component_t659_CustomAttributesCacheGenerator_Component_get_gameObject_m3159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var;
void Component_t659_CustomAttributesCacheGenerator_Component_GetComponent_m5560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1273 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1273 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7120(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Component_t659_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m6473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var;
void Component_t659_CustomAttributesCacheGenerator_Component_GetComponent_m7264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1352 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1352 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7257(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Component_t659_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m6474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponent_m6476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1273 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1273 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7120(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m6477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponent_m7268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1352 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1352 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7257(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m6478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1273 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1273 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7120(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m6479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_transform_m3444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_layer_m5427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_set_layer_m5428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_SetActive_m3361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_tag_m3710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_SendMessage_m6480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_SendMessage_m6480_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_SendMessage_m6480_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m6481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_AddComponent_m6482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1273 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1273 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1273_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7120(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m6483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1217_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_Internal_CreateGameObject_m6483_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1217 * tmp;
		tmp = (WritableAttribute_t1217 *)il2cpp_codegen_object_new (WritableAttribute_t1217_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6913(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m6487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m6488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m6489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m6490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m6491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m6492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m6493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m6494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m6495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m6496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_get_parentInternal_m6497(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_set_parentInternal_m6498(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_SetParent_m3548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m6499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_Rotate_m3685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_t364_Transform_Rotate_m6500_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m6501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m6502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_get_childCount_m3690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_GetChild_m3689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Time_t1134_CustomAttributesCacheGenerator_Time_get_time_m3569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Time_t1134_CustomAttributesCacheGenerator_Time_get_deltaTime_m3592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Time_t1134_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Time_t1134_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Time_t1134_CustomAttributesCacheGenerator_Time_set_timeScale_m3366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Random_t1135_CustomAttributesCacheGenerator_Random_set_seed_m3642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Random_t1135_CustomAttributesCacheGenerator_Random_Range_m3590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Random_t1135_CustomAttributesCacheGenerator_Random_RandomRangeInt_m6504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void PlayerPrefs_t1137_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m6507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void PlayerPrefs_t1137_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m6508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void PlayerPrefs_t1137_CustomAttributesCacheGenerator_PlayerPrefs_t1137_PlayerPrefs_GetString_m6508_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void PlayerPrefs_t1137_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void PlayerPrefs_t1137_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Physics_t1139_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m6526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_Raycast_m6527_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_Raycast_m6527_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void Physics_t1139_CustomAttributesCacheGenerator_Physics_Raycast_m3416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_Raycast_m5313_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_Raycast_m5313_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_RaycastAll_m5250_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_RaycastAll_m5250_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_RaycastAll_m6528_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_RaycastAll_m6528_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Physics_t1139_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m6529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Collider_t662_CustomAttributesCacheGenerator_Collider_set_enabled_m3428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Collider_t662_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m6530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_t692_Physics2D_IgnoreLayerCollision_m3602_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m6534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_Raycast_m5314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_t692_Physics2D_Raycast_m6535_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_t692_Physics2D_Raycast_m6535_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_t692_Physics2D_Raycast_m6535_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_t692_Physics2D_Raycast_m6535_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m6536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m6537(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Collider2D_t523_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Collider2D_t523_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m6539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_set_clip_m3404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_Play_m6555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_t471_AudioSource_Play_m6555_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_Play_m3672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_Stop_m3405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m6556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1270_il2cpp_TypeInfo_var;
void AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_t471_AudioSource_PlayOneShot_m6556_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1270 * tmp;
		tmp = (DefaultValueAttribute_t1270 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1270_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7115(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var;
void AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1271 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1271 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1271_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void AnimationEvent_t1150_CustomAttributesCacheGenerator_AnimationEvent_t1150____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void AnimationCurve_t1154_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void AnimationCurve_t1154_CustomAttributesCacheGenerator_AnimationCurve_t1154_AnimationCurve__ctor_m6582_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AnimationCurve_t1154_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m6584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void AnimationCurve_t1154_CustomAttributesCacheGenerator_AnimationCurve_Init_m6586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t1151_CustomAttributesCacheGenerator_AnimatorStateInfo_t1151____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Animator_t565_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Animator_t565_CustomAttributesCacheGenerator_Animator_StringToHash_m6605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Animator_t565_CustomAttributesCacheGenerator_Animator_SetIntegerString_m6606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Animator_t565_CustomAttributesCacheGenerator_Animator_SetTriggerString_m6607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Animator_t565_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m6608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextMesh_t361_CustomAttributesCacheGenerator_TextMesh_get_text_m3410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextMesh_t361_CustomAttributesCacheGenerator_TextMesh_set_text_m3411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void CharacterInfo_t1160_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void CharacterInfo_t1160_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void CharacterInfo_t1160_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t702_il2cpp_TypeInfo_var;
void CharacterInfo_t1160_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t702 * tmp;
		tmp = (ObsoleteAttribute_t702 *)il2cpp_codegen_object_new (ObsoleteAttribute_t702_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3828(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Font_t803_CustomAttributesCacheGenerator_Font_get_material_m5518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Font_t803_CustomAttributesCacheGenerator_Font_HasCharacter_m5412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Font_t803_CustomAttributesCacheGenerator_Font_get_dynamic_m5520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Font_t803_CustomAttributesCacheGenerator_Font_get_fontSize_m5521(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t1161_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1354 * tmp;
		tmp = (EditorBrowsableAttribute_t1354 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7262(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_Init_m6636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6659(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasGroup_t544_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasGroup_t544_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5498(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasGroup_t544_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasGroup_t544_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransformUtility_t958_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransformUtility_t958_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1210_il2cpp_TypeInfo_var;
void RectTransformUtility_t958_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1210 * tmp;
		tmp = (WrapperlessIcall_t1210 *)il2cpp_codegen_object_new (WrapperlessIcall_t1210_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6904(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1165_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1165_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1165_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1165_CustomAttributesCacheGenerator_Request_get_sourceId_m6675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1165_CustomAttributesCacheGenerator_Request_get_appId_m6676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1165_CustomAttributesCacheGenerator_Request_get_domain_m6677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1167_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1167_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1167_CustomAttributesCacheGenerator_Response_get_success_m6686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1167_CustomAttributesCacheGenerator_Response_set_success_m6687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1167_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1167_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1172_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1172_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1172_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1172_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1172_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1172_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1174_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1174_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1174_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1175_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1175_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1175_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1175_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1175_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1175_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_name_m6772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_name_m6773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1181_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1181_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1181_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t1356_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t1182_il2cpp_TypeInfo_var;
void AppID_t1182_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2393);
		AppID_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1356 * tmp;
		tmp = (DefaultValueAttribute_t1356 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1356_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7279(tmp, Box(AppID_t1182_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t1356_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t1183_il2cpp_TypeInfo_var;
void SourceID_t1183_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2393);
		SourceID_t1183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1356 * tmp;
		tmp = (DefaultValueAttribute_t1356 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1356_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7279(tmp, Box(SourceID_t1183_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t1356_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t1184_il2cpp_TypeInfo_var;
void NetworkID_t1184_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2393);
		NetworkID_t1184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1356 * tmp;
		tmp = (DefaultValueAttribute_t1356 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1356_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7279(tmp, Box(NetworkID_t1184_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t1356_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t1185_il2cpp_TypeInfo_var;
void NodeID_t1185_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2393);
		NodeID_t1185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t1356 * tmp;
		tmp = (DefaultValueAttribute_t1356 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1356_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7279(tmp, Box(NodeID_t1185_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var;
void NetworkMatch_t1190_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m7280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t52 * tmp;
		tmp = (DebuggerHiddenAttribute_t52 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m228(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1358_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1358_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m7286(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t52 * tmp;
		tmp = (DebuggerHiddenAttribute_t52 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m228(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1358_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m7287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t52 * tmp;
		tmp = (DebuggerHiddenAttribute_t52 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m228(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1358_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m7289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t52 * tmp;
		tmp = (DebuggerHiddenAttribute_t52 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m228(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var;
void JsonArray_t1191_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2394);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1354 * tmp;
		tmp = (EditorBrowsableAttribute_t1354 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7262(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1359 * tmp;
		tmp = (GeneratedCodeAttribute_t1359 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7290(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void JsonObject_t1192_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2394);
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1354 * tmp;
		tmp = (EditorBrowsableAttribute_t1354 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7262(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1359 * tmp;
		tmp = (GeneratedCodeAttribute_t1359 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7290(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var;
void SimpleJson_t1195_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2394);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1359 * tmp;
		tmp = (GeneratedCodeAttribute_t1359 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7290(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var;
void SimpleJson_t1195_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2395);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1360 * tmp;
		tmp = (SuppressMessageAttribute_t1360 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7291(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7292(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var;
void SimpleJson_t1195_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2395);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1360 * tmp;
		tmp = (SuppressMessageAttribute_t1360 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7291(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var;
void SimpleJson_t1195_CustomAttributesCacheGenerator_SimpleJson_t1195____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1354 * tmp;
		tmp = (EditorBrowsableAttribute_t1354 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1354_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7262(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1193_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2394);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1359 * tmp;
		tmp = (GeneratedCodeAttribute_t1359 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7290(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1193_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2395);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1360 * tmp;
		tmp = (SuppressMessageAttribute_t1360 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7291(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7292(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1194_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2394);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1359 * tmp;
		tmp = (GeneratedCodeAttribute_t1359 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7290(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1194_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2395);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1360 * tmp;
		tmp = (SuppressMessageAttribute_t1360 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7291(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7292(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1194_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2395);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1360 * tmp;
		tmp = (SuppressMessageAttribute_t1360 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1360_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7291(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7292(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var;
void ReflectionUtils_t1209_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2394);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1359 * tmp;
		tmp = (GeneratedCodeAttribute_t1359 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1359_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7290(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void ReflectionUtils_t1209_CustomAttributesCacheGenerator_ReflectionUtils_t1209_ReflectionUtils_GetConstructorInfo_m6888_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void ReflectionUtils_t1209_CustomAttributesCacheGenerator_ReflectionUtils_t1209_ReflectionUtils_GetContructor_m6893_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void ReflectionUtils_t1209_CustomAttributesCacheGenerator_ReflectionUtils_t1209_ReflectionUtils_GetConstructorByReflection_m6895_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t1361_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1202_CustomAttributesCacheGenerator_ConstructorDelegate_t1202_ConstructorDelegate_Invoke_m6873_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t699_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1202_CustomAttributesCacheGenerator_ConstructorDelegate_t1202_ConstructorDelegate_BeginInvoke_m6874_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t699 * tmp;
		tmp = (ParamArrayAttribute_t699 *)il2cpp_codegen_object_new (ParamArrayAttribute_t699_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3740(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1204_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1205_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1206_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1207_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1208_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t1211_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1007_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7317(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void RequireComponent_t1001_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7318(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void WritableAttribute_t1217_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7318(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t1218_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var;
void GUIStateObjects_t1229_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1352 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1352 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7257(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1232_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1232_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1232_CustomAttributesCacheGenerator_Achievement_get_id_m6950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1232_CustomAttributesCacheGenerator_Achievement_set_id_m6951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1232_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1232_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6953(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1233_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1233_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1233_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1234_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1234_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1234_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1234_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1234_CustomAttributesCacheGenerator_Score_get_value_m6972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1234_CustomAttributesCacheGenerator_Score_set_value_m6973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_get_id_m6981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_set_id_m6982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_get_range_m6985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_set_range_m6986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void PropertyAttribute_t1248_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7317(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7318(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void TooltipAttribute_t1010_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7317(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7318(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void SpaceAttribute_t1008_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7317(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7318(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void RangeAttribute_t1005_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7317(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7318(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1011_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7317(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7318(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1009_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7317(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7318(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var;
void StackTraceUtility_t1251_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m7031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1352 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1352 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7257(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var;
void StackTraceUtility_t1251_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m7034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1352 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1352 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7257(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var;
void StackTraceUtility_t1251_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m7036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1352 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1352 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1352_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7257(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t1252_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7318(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
void ArgumentCache_t1259_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void ArgumentCache_t1259_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void ArgumentCache_t1259_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void ArgumentCache_t1259_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void ArgumentCache_t1259_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void ArgumentCache_t1259_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
void PersistentCall_t1263_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void PersistentCall_t1263_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
void PersistentCall_t1263_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void PersistentCall_t1263_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void PersistentCall_t1263_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void PersistentCallGroup_t1265_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var;
void UnityEventBase_t1268_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1729);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t999 * tmp;
		tmp = (FormerlySerializedAsAttribute_t999 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t999_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5609(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t700_il2cpp_TypeInfo_var;
void UnityEventBase_t1268_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t700 * tmp;
		tmp = (SerializeField_t700 *)il2cpp_codegen_object_new (SerializeField_t700_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3741(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t998_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t1269_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1728);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t998 * tmp;
		tmp = (AddComponentMenu_t998 *)il2cpp_codegen_object_new (AddComponentMenu_t998_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m5608(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t1270_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t1271_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t999_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7318(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m7317(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t703_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t1273_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t703 * tmp;
		tmp = (AttributeUsageAttribute_t703 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t703_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3858(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[790] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t1056_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5758,
	AssetBundleCreateRequest_t1056_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5759,
	AssetBundle_t1058_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5763,
	AssetBundle_t1058_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5764,
	AssetBundle_t1058_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5765,
	LayerMask_t788_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5768,
	LayerMask_t788_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5769,
	LayerMask_t788_CustomAttributesCacheGenerator_LayerMask_t788_LayerMask_GetMask_m5770_Arg0_ParameterInfo,
	RuntimePlatform_t1062_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t1062_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t1062_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t1062_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t1062_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t1063_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m3715,
	SystemInfo_t1063_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5771,
	Coroutine_t843_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5774,
	ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5776,
	ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_t106_ScriptableObject_Internal_CreateScriptableObject_m5776_Arg0_ParameterInfo,
	ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5777,
	ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5779,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5784,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5785,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5786,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5787,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5788,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5789,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5790,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5791,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5792,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5793,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5794,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5795,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5796,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5797,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5798,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5799,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5800,
	GameCenterPlatform_t697_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5802,
	GcLeaderboard_t1075_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5846,
	GcLeaderboard_t1075_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5847,
	GcLeaderboard_t1075_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5848,
	GcLeaderboard_t1075_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5849,
	MeshFilter_t687_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3577,
	Mesh_t437_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5850,
	Mesh_t437_CustomAttributesCacheGenerator_Mesh_t437_Mesh_Internal_Create_m5850_Arg0_ParameterInfo,
	Mesh_t437_CustomAttributesCacheGenerator_Mesh_set_vertices_m3578,
	Mesh_t437_CustomAttributesCacheGenerator_Mesh_set_triangles_m3579,
	Renderer_t593_CustomAttributesCacheGenerator_Renderer_set_enabled_m3427,
	Renderer_t593_CustomAttributesCacheGenerator_Renderer_get_material_m3406,
	Renderer_t593_CustomAttributesCacheGenerator_Renderer_set_material_m3408,
	Renderer_t593_CustomAttributesCacheGenerator_Renderer_get_bounds_m3436,
	Renderer_t593_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5244,
	Renderer_t593_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5245,
	Screen_t1077_CustomAttributesCacheGenerator_Screen_get_width_m3062,
	Screen_t1077_CustomAttributesCacheGenerator_Screen_get_height_m3078,
	Screen_t1077_CustomAttributesCacheGenerator_Screen_get_dpi_m3187,
	Screen_t1077_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3502,
	Screen_t1077_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3503,
	Screen_t1077_CustomAttributesCacheGenerator_Screen_get_orientation_m3077,
	Texture_t352_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5872,
	Texture_t352_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5873,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5877,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5877_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5286,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5362,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5878,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5878_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5878_Arg1_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m3104,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3103,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5879,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3105,
	RenderTexture_t1078_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5880,
	RenderTexture_t1078_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5881,
	GUILayer_t1081_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5885,
	Gradient_t1084_CustomAttributesCacheGenerator_Gradient_Init_m5889,
	Gradient_t1084_CustomAttributesCacheGenerator_Gradient_Cleanup_m5890,
	GUI_t601_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t601_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t601_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5897,
	GUI_t601_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5898,
	GUI_t601_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5899,
	GUI_t601_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5900,
	GUI_t601_CustomAttributesCacheGenerator_GUI_set_changed_m5902,
	GUI_t601_CustomAttributesCacheGenerator_GUI_get_enabled_m5903,
	GUI_t601_CustomAttributesCacheGenerator_GUI_set_enabled_m3096,
	GUI_t601_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5905,
	GUI_t601_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5908,
	GUI_t601_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5911,
	GUI_t601_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5918,
	GUI_t601_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5925,
	GUI_t601_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5927,
	GUI_t601_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5934,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_Label_m3074_Arg1_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_Box_m3090_Arg1_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_Button_m3072_Arg1_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_TextField_m3075_Arg1_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_TextField_m3515_Arg2_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_Toggle_m3121_Arg2_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_SelectionGrid_m3119_Arg3_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_SelectionGrid_m5941_Arg4_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginHorizontal_m3073_Arg0_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginHorizontal_m5942_Arg2_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginVertical_m3087_Arg0_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginVertical_m5943_Arg2_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginScrollView_m3095_Arg1_ParameterInfo,
	GUILayout_t1087_CustomAttributesCacheGenerator_GUILayout_t1087_GUILayout_BeginScrollView_m5944_Arg6_ParameterInfo,
	GUILayoutUtility_t600_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5959,
	GUILayoutUtility_t600_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5961,
	GUILayoutUtility_t600_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5962,
	GUILayoutUtility_t600_CustomAttributesCacheGenerator_GUILayoutUtility_t600_GUILayoutUtility_GetRect_m5965_Arg2_ParameterInfo,
	GUILayoutUtility_t600_CustomAttributesCacheGenerator_GUILayoutUtility_t600_GUILayoutUtility_GetRect_m5967_Arg3_ParameterInfo,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m6009,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m6013,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m6017,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m6018,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m6019,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m6020,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m6021,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m6022,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m6024,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m6026,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m6030,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m6031,
	GUIUtility_t1099_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m6032,
	GUIClip_t1100_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m6034,
	GUIClip_t1100_CustomAttributesCacheGenerator_GUIClip_Pop_m6035,
	GUISettings_t1101_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t1101_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t1101_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t1101_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t1101_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t678_CustomAttributesCacheGenerator,
	GUISkin_t678_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t678_CustomAttributesCacheGenerator_m_box,
	GUISkin_t678_CustomAttributesCacheGenerator_m_button,
	GUISkin_t678_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t678_CustomAttributesCacheGenerator_m_label,
	GUISkin_t678_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t678_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t678_CustomAttributesCacheGenerator_m_window,
	GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t678_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t678_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t678_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t678_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t678_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t678_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t678_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t678_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t678_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t678_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t680_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t680_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t680_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t622_CustomAttributesCacheGenerator_GUIStyleState_Init_m6104,
	GUIStyleState_t622_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m6105,
	GUIStyleState_t622_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m6106,
	GUIStyleState_t622_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m6107,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_Init_m6110,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_Cleanup_m6111,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_left_m5553,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_set_left_m6112,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_right_m6113,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_set_right_m6114,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_top_m5554,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_set_top_m6115,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3526,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_set_bottom_m6116,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5547,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5548,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m6118,
	RectOffset_t596_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m6120,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m6124,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m6125,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m6126,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m6127,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m6128,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m6129,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m6131,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m6132,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m6133,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3064,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m6134,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3065,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m6135,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m6136,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m6137,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3069,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m6138,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3068,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m6139,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3166,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3167,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m6142,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m6145,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m6146_Arg3_ParameterInfo,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m6148,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m6149,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m6153,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m6155,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m6157,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m6160,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m6163,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m6165,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5449,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5450,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg1_ParameterInfo,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg2_ParameterInfo,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg3_ParameterInfo,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg4_ParameterInfo,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg5_ParameterInfo,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_t838_TouchScreenKeyboard_Open_m6166_Arg6_ParameterInfo,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5389,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5390,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5448,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5388,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5447,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5400,
	TouchScreenKeyboard_t838_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5399,
	Event_t681_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t681_CustomAttributesCacheGenerator_Event_Init_m6167,
	Event_t681_CustomAttributesCacheGenerator_Event_Cleanup_m6169,
	Event_t681_CustomAttributesCacheGenerator_Event_get_rawType_m5413,
	Event_t681_CustomAttributesCacheGenerator_Event_get_type_m3523,
	Event_t681_CustomAttributesCacheGenerator_Event_GetTypeForControl_m6170,
	Event_t681_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m6172,
	Event_t681_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m6174,
	Event_t681_CustomAttributesCacheGenerator_Event_get_modifiers_m5409,
	Event_t681_CustomAttributesCacheGenerator_Event_get_character_m5411,
	Event_t681_CustomAttributesCacheGenerator_Event_get_commandName_m6175,
	Event_t681_CustomAttributesCacheGenerator_Event_get_keyCode_m5410,
	Event_t681_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m6176,
	Event_t681_CustomAttributesCacheGenerator_Event_Use_m6178,
	Event_t681_CustomAttributesCacheGenerator_Event_PopEvent_m5414,
	EventModifiers_t1110_CustomAttributesCacheGenerator,
	Vector2_t68_CustomAttributesCacheGenerator,
	Vector3_t449_CustomAttributesCacheGenerator,
	Color_t283_CustomAttributesCacheGenerator,
	Color32_t653_CustomAttributesCacheGenerator,
	Quaternion_t682_CustomAttributesCacheGenerator,
	Quaternion_t682_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m6204,
	Quaternion_t682_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m6207,
	Quaternion_t682_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m6209,
	Matrix4x4_t974_CustomAttributesCacheGenerator,
	Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m6225,
	Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m6227,
	Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m6229,
	Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m6232,
	Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m6244,
	Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m6247,
	Matrix4x4_t974_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m6248,
	Bounds_t663_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m6265,
	Bounds_t663_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m6268,
	Bounds_t663_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m6271,
	Bounds_t663_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m6275,
	Vector4_t935_CustomAttributesCacheGenerator,
	Mathf_t624_CustomAttributesCacheGenerator_Mathf_t624_Mathf_SmoothDamp_m5472_Arg4_ParameterInfo,
	Mathf_t624_CustomAttributesCacheGenerator_Mathf_t624_Mathf_SmoothDamp_m5472_Arg5_ParameterInfo,
	DrivenTransformProperties_t1112_CustomAttributesCacheGenerator,
	RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m6306,
	RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m6307,
	RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m6308,
	RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m6309,
	RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m6310,
	RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m6311,
	RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m6312,
	RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m6313,
	RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m6314,
	RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m6315,
	RectTransform_t572_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m6316,
	Resources_t685_CustomAttributesCacheGenerator_Resources_Load_m6322,
	TextAsset_t677_CustomAttributesCacheGenerator_TextAsset_get_text_m3506,
	SerializePrivateVariables_t1116_CustomAttributesCacheGenerator,
	Shader_t1117_CustomAttributesCacheGenerator_Shader_PropertyToID_m6325,
	Material_t438_CustomAttributesCacheGenerator_Material_SetTexture_m6327,
	Material_t438_CustomAttributesCacheGenerator_Material_GetTexture_m6329,
	Material_t438_CustomAttributesCacheGenerator_Material_SetFloat_m6331,
	Material_t438_CustomAttributesCacheGenerator_Material_HasProperty_m6332,
	Material_t438_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m6333,
	Material_t438_CustomAttributesCacheGenerator_Material_t438_Material_Internal_CreateWithMaterial_m6333_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t1118_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t1118_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m6336,
	SphericalHarmonicsL2_t1118_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m6339,
	SphericalHarmonicsL2_t1118_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m6342,
	Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_rect_m5340,
	Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5336,
	Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_texture_m5333,
	Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5359,
	Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_border_m5334,
	SpriteRenderer_t510_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m6352,
	SpriteRenderer_t510_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m6353,
	DataUtility_t1119_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5347,
	DataUtility_t1119_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5346,
	DataUtility_t1119_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5339,
	DataUtility_t1119_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m6354,
	WWW_t223_CustomAttributesCacheGenerator_WWW_DestroyWWW_m6357,
	WWW_t223_CustomAttributesCacheGenerator_WWW_InitWWW_m6358,
	WWW_t223_CustomAttributesCacheGenerator_WWW_EscapeURL_m3591,
	WWW_t223_CustomAttributesCacheGenerator_WWW_t223_WWW_EscapeURL_m6359_Arg1_ParameterInfo,
	WWW_t223_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m6360,
	WWW_t223_CustomAttributesCacheGenerator_WWW_get_bytes_m6363,
	WWW_t223_CustomAttributesCacheGenerator_WWW_get_error_m3259,
	WWW_t223_CustomAttributesCacheGenerator_WWW_GetTexture_m6364,
	WWW_t223_CustomAttributesCacheGenerator_WWW_get_isDone_m6365,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m3108,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m6368_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3107,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m6370_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m6370_Arg3_ParameterInfo,
	WWWTranscoder_t1121_CustomAttributesCacheGenerator_WWWTranscoder_t1121_WWWTranscoder_URLEncode_m6374_Arg1_ParameterInfo,
	WWWTranscoder_t1121_CustomAttributesCacheGenerator_WWWTranscoder_t1121_WWWTranscoder_QPEncode_m6376_Arg1_ParameterInfo,
	WWWTranscoder_t1121_CustomAttributesCacheGenerator_WWWTranscoder_t1121_WWWTranscoder_SevenBitClean_m6379_Arg1_ParameterInfo,
	CacheIndex_t1122_CustomAttributesCacheGenerator,
	UnityString_t1123_CustomAttributesCacheGenerator_UnityString_t1123_UnityString_Format_m6381_Arg1_ParameterInfo,
	AsyncOperation_t1057_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m6383,
	Application_t1124_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3158,
	Application_t1124_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m6388,
	Application_t1124_CustomAttributesCacheGenerator_Application_get_isPlaying_m5452,
	Application_t1124_CustomAttributesCacheGenerator_Application_get_isEditor_m5454,
	Application_t1124_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3471,
	Application_t1124_CustomAttributesCacheGenerator_Application_get_platform_m3172,
	Application_t1124_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3677,
	Application_t1124_CustomAttributesCacheGenerator_Application_t1124_Application_ExternalCall_m3472_Arg1_ParameterInfo,
	Application_t1124_CustomAttributesCacheGenerator_Application_t1124_Application_BuildInvocationForArguments_m6390_Arg1_ParameterInfo,
	Application_t1124_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m6391,
	Application_t1124_CustomAttributesCacheGenerator_Application_OpenURL_m3365,
	Application_t1124_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m6393,
	Application_t1124_CustomAttributesCacheGenerator_Application_t1124____persistentDataPath_PropertyInfo,
	Behaviour_t984_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3656,
	Behaviour_t984_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5422,
	Behaviour_t984_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5182,
	Camera_t479_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5235,
	Camera_t479_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5234,
	Camera_t479_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3695,
	Camera_t479_CustomAttributesCacheGenerator_Camera_get_depth_m5147,
	Camera_t479_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5248,
	Camera_t479_CustomAttributesCacheGenerator_Camera_get_eventMask_m6399,
	Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m6400,
	Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m6401,
	Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m6402,
	Camera_t479_CustomAttributesCacheGenerator_Camera_get_targetTexture_m6404,
	Camera_t479_CustomAttributesCacheGenerator_Camera_get_clearFlags_m6405,
	Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m6406,
	Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m6407,
	Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m6408,
	Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m6409,
	Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m6410,
	Camera_t479_CustomAttributesCacheGenerator_Camera_get_main_m3412,
	Camera_t479_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m6411,
	Camera_t479_CustomAttributesCacheGenerator_Camera_GetAllCameras_m6412,
	Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m6417,
	Camera_t479_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m6419,
	CameraCallback_t1125_CustomAttributesCacheGenerator,
	Debug_t1126_CustomAttributesCacheGenerator_Debug_Internal_Log_m6420,
	Debug_t1126_CustomAttributesCacheGenerator_Debug_t1126_Debug_Internal_Log_m6420_Arg2_ParameterInfo,
	Debug_t1126_CustomAttributesCacheGenerator_Debug_Internal_LogException_m6421,
	Debug_t1126_CustomAttributesCacheGenerator_Debug_t1126_Debug_Internal_LogException_m6421_Arg1_ParameterInfo,
	Debug_t1126_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3470,
	Display_t1129_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m6447,
	Display_t1129_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m6448,
	Display_t1129_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m6449,
	Display_t1129_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m6450,
	Display_t1129_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m6451,
	Display_t1129_CustomAttributesCacheGenerator_Display_SetParamsImpl_m6452,
	Display_t1129_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m6453,
	Display_t1129_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m6454,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3420,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3419,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m6455,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6456,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m6457,
	Input_t603_CustomAttributesCacheGenerator_Input_GetAxis_m3707,
	Input_t603_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5226,
	Input_t603_CustomAttributesCacheGenerator_Input_GetButtonDown_m5225,
	Input_t603_CustomAttributesCacheGenerator_Input_GetMouseButton_m3620,
	Input_t603_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3415,
	Input_t603_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3619,
	Input_t603_CustomAttributesCacheGenerator_Input_get_mousePosition_m3413,
	Input_t603_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5199,
	Input_t603_CustomAttributesCacheGenerator_Input_get_mousePresent_m5224,
	Input_t603_CustomAttributesCacheGenerator_Input_GetTouch_m3092,
	Input_t603_CustomAttributesCacheGenerator_Input_get_touchCount_m3091,
	Input_t603_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5451,
	Input_t603_CustomAttributesCacheGenerator_Input_get_compositionString_m5391,
	Input_t603_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m6459,
	HideFlags_t1132_CustomAttributesCacheGenerator,
	Object_t599_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m6462,
	Object_t599_CustomAttributesCacheGenerator_Object_Destroy_m6463,
	Object_t599_CustomAttributesCacheGenerator_Object_t599_Object_Destroy_m6463_Arg1_ParameterInfo,
	Object_t599_CustomAttributesCacheGenerator_Object_Destroy_m3305,
	Object_t599_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6464,
	Object_t599_CustomAttributesCacheGenerator_Object_t599_Object_DestroyImmediate_m6464_Arg1_ParameterInfo,
	Object_t599_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5453,
	Object_t599_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m6465,
	Object_t599_CustomAttributesCacheGenerator_Object_get_name_m3160,
	Object_t599_CustomAttributesCacheGenerator_Object_set_name_m5514,
	Object_t599_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m3190,
	Object_t599_CustomAttributesCacheGenerator_Object_set_hideFlags_m5425,
	Object_t599_CustomAttributesCacheGenerator_Object_ToString_m3878,
	Object_t599_CustomAttributesCacheGenerator_Object_Instantiate_m3547,
	Object_t599_CustomAttributesCacheGenerator_Object_FindObjectOfType_m6471,
	Component_t659_CustomAttributesCacheGenerator_Component_get_transform_m3441,
	Component_t659_CustomAttributesCacheGenerator_Component_get_gameObject_m3159,
	Component_t659_CustomAttributesCacheGenerator_Component_GetComponent_m5560,
	Component_t659_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m6473,
	Component_t659_CustomAttributesCacheGenerator_Component_GetComponent_m7264,
	Component_t659_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m6474,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponent_m6476,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m6477,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponent_m7268,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m6478,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m6479,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_transform_m3444,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_layer_m5427,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_set_layer_m5428,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_SetActive_m3361,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5183,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_tag_m3710,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3615,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_SendMessage_m6480,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_SendMessage_m6480_Arg1_ParameterInfo,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_SendMessage_m6480_Arg2_ParameterInfo,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m6481,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_AddComponent_m6482,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m6483,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_Internal_CreateGameObject_m6483_Arg0_ParameterInfo,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m6487,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m6488,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m6489,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m6490,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m6491,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m6492,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m6493,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m6494,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m6495,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m6496,
	Transform_t364_CustomAttributesCacheGenerator_Transform_get_parentInternal_m6497,
	Transform_t364_CustomAttributesCacheGenerator_Transform_set_parentInternal_m6498,
	Transform_t364_CustomAttributesCacheGenerator_Transform_SetParent_m3548,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m6499,
	Transform_t364_CustomAttributesCacheGenerator_Transform_Rotate_m3685,
	Transform_t364_CustomAttributesCacheGenerator_Transform_t364_Transform_Rotate_m6500_Arg1_ParameterInfo,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m6501,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m6502,
	Transform_t364_CustomAttributesCacheGenerator_Transform_get_childCount_m3690,
	Transform_t364_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5426,
	Transform_t364_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3549,
	Transform_t364_CustomAttributesCacheGenerator_Transform_GetChild_m3689,
	Time_t1134_CustomAttributesCacheGenerator_Time_get_time_m3569,
	Time_t1134_CustomAttributesCacheGenerator_Time_get_deltaTime_m3592,
	Time_t1134_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5228,
	Time_t1134_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5260,
	Time_t1134_CustomAttributesCacheGenerator_Time_set_timeScale_m3366,
	Random_t1135_CustomAttributesCacheGenerator_Random_set_seed_m3642,
	Random_t1135_CustomAttributesCacheGenerator_Random_Range_m3590,
	Random_t1135_CustomAttributesCacheGenerator_Random_RandomRangeInt_m6504,
	PlayerPrefs_t1137_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m6507,
	PlayerPrefs_t1137_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m6508,
	PlayerPrefs_t1137_CustomAttributesCacheGenerator_PlayerPrefs_t1137_PlayerPrefs_GetString_m6508_Arg1_ParameterInfo,
	PlayerPrefs_t1137_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3325,
	PlayerPrefs_t1137_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3324,
	Physics_t1139_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m6526,
	Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_Raycast_m6527_Arg3_ParameterInfo,
	Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_Raycast_m6527_Arg4_ParameterInfo,
	Physics_t1139_CustomAttributesCacheGenerator_Physics_Raycast_m3416,
	Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_Raycast_m5313_Arg2_ParameterInfo,
	Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_Raycast_m5313_Arg3_ParameterInfo,
	Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_RaycastAll_m5250_Arg1_ParameterInfo,
	Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_RaycastAll_m5250_Arg2_ParameterInfo,
	Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_RaycastAll_m6528_Arg2_ParameterInfo,
	Physics_t1139_CustomAttributesCacheGenerator_Physics_t1139_Physics_RaycastAll_m6528_Arg3_ParameterInfo,
	Physics_t1139_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m6529,
	Collider_t662_CustomAttributesCacheGenerator_Collider_set_enabled_m3428,
	Collider_t662_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m6530,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3602,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_t692_Physics2D_IgnoreLayerCollision_m3602_Arg2_ParameterInfo,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m6534,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_Raycast_m5314,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_t692_Physics2D_Raycast_m6535_Arg2_ParameterInfo,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_t692_Physics2D_Raycast_m6535_Arg3_ParameterInfo,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_t692_Physics2D_Raycast_m6535_Arg4_ParameterInfo,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_t692_Physics2D_Raycast_m6535_Arg5_ParameterInfo,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5238,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m6536,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3614,
	Physics2D_t692_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m6537,
	Collider2D_t523_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3674,
	Collider2D_t523_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m6539,
	AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_set_clip_m3404,
	AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_Play_m6555,
	AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_t471_AudioSource_Play_m6555_Arg0_ParameterInfo,
	AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_Play_m3672,
	AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3688,
	AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_Stop_m3405,
	AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3673,
	AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m6556,
	AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_t471_AudioSource_PlayOneShot_m6556_Arg1_ParameterInfo,
	AudioSource_t471_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3418,
	AnimationEvent_t1150_CustomAttributesCacheGenerator_AnimationEvent_t1150____data_PropertyInfo,
	AnimationCurve_t1154_CustomAttributesCacheGenerator,
	AnimationCurve_t1154_CustomAttributesCacheGenerator_AnimationCurve_t1154_AnimationCurve__ctor_m6582_Arg0_ParameterInfo,
	AnimationCurve_t1154_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m6584,
	AnimationCurve_t1154_CustomAttributesCacheGenerator_AnimationCurve_Init_m6586,
	AnimatorStateInfo_t1151_CustomAttributesCacheGenerator_AnimatorStateInfo_t1151____nameHash_PropertyInfo,
	Animator_t565_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5506,
	Animator_t565_CustomAttributesCacheGenerator_Animator_StringToHash_m6605,
	Animator_t565_CustomAttributesCacheGenerator_Animator_SetIntegerString_m6606,
	Animator_t565_CustomAttributesCacheGenerator_Animator_SetTriggerString_m6607,
	Animator_t565_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m6608,
	TextMesh_t361_CustomAttributesCacheGenerator_TextMesh_get_text_m3410,
	TextMesh_t361_CustomAttributesCacheGenerator_TextMesh_set_text_m3411,
	CharacterInfo_t1160_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t1160_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t1160_CustomAttributesCacheGenerator_width,
	CharacterInfo_t1160_CustomAttributesCacheGenerator_flipped,
	Font_t803_CustomAttributesCacheGenerator_Font_get_material_m5518,
	Font_t803_CustomAttributesCacheGenerator_Font_HasCharacter_m5412,
	Font_t803_CustomAttributesCacheGenerator_Font_get_dynamic_m5520,
	Font_t803_CustomAttributesCacheGenerator_Font_get_fontSize_m5521,
	FontTextureRebuildCallback_t1161_CustomAttributesCacheGenerator,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_Init_m6636,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6637,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6640,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5424,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6641,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6642,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6643,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6644,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6645,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6646,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5405,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6647,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6648,
	TextGenerator_t841_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5440,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5309,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5535,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3719,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6659,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3565,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5538,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5337,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5539,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5296,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5311,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5310,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5318,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5283,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5517,
	CanvasGroup_t544_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3691,
	CanvasGroup_t544_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5498,
	CanvasGroup_t544_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6661,
	CanvasGroup_t544_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5295,
	CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6664,
	CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5299,
	CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5570,
	CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5291,
	CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6665,
	CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6666,
	CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5287,
	CanvasRenderer_t808_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5284,
	RectTransformUtility_t958_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6668,
	RectTransformUtility_t958_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6670,
	RectTransformUtility_t958_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5298,
	Request_t1165_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t1165_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t1165_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t1165_CustomAttributesCacheGenerator_Request_get_sourceId_m6675,
	Request_t1165_CustomAttributesCacheGenerator_Request_get_appId_m6676,
	Request_t1165_CustomAttributesCacheGenerator_Request_get_domain_m6677,
	Response_t1167_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t1167_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t1167_CustomAttributesCacheGenerator_Response_get_success_m6686,
	Response_t1167_CustomAttributesCacheGenerator_Response_set_success_m6687,
	Response_t1167_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6688,
	Response_t1167_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6689,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6694,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6695,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6696,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6697,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6698,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6699,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6700,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6701,
	CreateMatchRequest_t1170_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6702,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6705,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6706,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6707,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6708,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6709,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6710,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6711,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6712,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6713,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6714,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6715,
	CreateMatchResponse_t1171_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6716,
	JoinMatchRequest_t1172_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t1172_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t1172_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6720,
	JoinMatchRequest_t1172_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6721,
	JoinMatchRequest_t1172_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6722,
	JoinMatchRequest_t1172_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6723,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6726,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6727,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6728,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6729,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6730,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6731,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6732,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6733,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6734,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6735,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6736,
	JoinMatchResponse_t1173_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6737,
	DestroyMatchRequest_t1174_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t1174_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6741,
	DestroyMatchRequest_t1174_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6742,
	DropConnectionRequest_t1175_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t1175_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t1175_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6745,
	DropConnectionRequest_t1175_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6746,
	DropConnectionRequest_t1175_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6747,
	DropConnectionRequest_t1175_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6748,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6751,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6752,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6753,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6754,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6755,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6756,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6757,
	ListMatchRequest_t1176_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6758,
	MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6761,
	MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6762,
	MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6763,
	MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6764,
	MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6765,
	MatchDirectConnectInfo_t1177_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6766,
	MatchDesc_t1179_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t1179_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t1179_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t1179_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t1179_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t1179_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t1179_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t1179_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t1179_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6770,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6771,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_name_m6772,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_name_m6773,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6774,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6775,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6776,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6777,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6778,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6779,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6780,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6781,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6782,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6783,
	MatchDesc_t1179_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6784,
	ListMatchResponse_t1181_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t1181_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6788,
	ListMatchResponse_t1181_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6789,
	AppID_t1182_CustomAttributesCacheGenerator,
	SourceID_t1183_CustomAttributesCacheGenerator,
	NetworkID_t1184_CustomAttributesCacheGenerator,
	NodeID_t1185_CustomAttributesCacheGenerator,
	NetworkMatch_t1190_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m7280,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1358_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1358_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m7286,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1358_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m7287,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1358_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m7289,
	JsonArray_t1191_CustomAttributesCacheGenerator,
	JsonObject_t1192_CustomAttributesCacheGenerator,
	SimpleJson_t1195_CustomAttributesCacheGenerator,
	SimpleJson_t1195_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6833,
	SimpleJson_t1195_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6845,
	SimpleJson_t1195_CustomAttributesCacheGenerator_SimpleJson_t1195____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t1193_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t1193_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7293,
	PocoJsonSerializerStrategy_t1194_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t1194_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6862,
	PocoJsonSerializerStrategy_t1194_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6863,
	ReflectionUtils_t1209_CustomAttributesCacheGenerator,
	ReflectionUtils_t1209_CustomAttributesCacheGenerator_ReflectionUtils_t1209_ReflectionUtils_GetConstructorInfo_m6888_Arg1_ParameterInfo,
	ReflectionUtils_t1209_CustomAttributesCacheGenerator_ReflectionUtils_t1209_ReflectionUtils_GetContructor_m6893_Arg1_ParameterInfo,
	ReflectionUtils_t1209_CustomAttributesCacheGenerator_ReflectionUtils_t1209_ReflectionUtils_GetConstructorByReflection_m6895_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t1361_CustomAttributesCacheGenerator,
	ConstructorDelegate_t1202_CustomAttributesCacheGenerator_ConstructorDelegate_t1202_ConstructorDelegate_Invoke_m6873_Arg0_ParameterInfo,
	ConstructorDelegate_t1202_CustomAttributesCacheGenerator_ConstructorDelegate_t1202_ConstructorDelegate_BeginInvoke_m6874_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1204_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1205_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1206_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1207_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1208_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t1211_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1007_CustomAttributesCacheGenerator,
	RequireComponent_t1001_CustomAttributesCacheGenerator,
	WritableAttribute_t1217_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t1218_CustomAttributesCacheGenerator,
	GUIStateObjects_t1229_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6928,
	Achievement_t1232_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t1232_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t1232_CustomAttributesCacheGenerator_Achievement_get_id_m6950,
	Achievement_t1232_CustomAttributesCacheGenerator_Achievement_set_id_m6951,
	Achievement_t1232_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6952,
	Achievement_t1232_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6953,
	AchievementDescription_t1233_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t1233_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6960,
	AchievementDescription_t1233_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6961,
	Score_t1234_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t1234_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t1234_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6970,
	Score_t1234_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6971,
	Score_t1234_CustomAttributesCacheGenerator_Score_get_value_m6972,
	Score_t1234_CustomAttributesCacheGenerator_Score_set_value_m6973,
	Leaderboard_t1074_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t1074_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t1074_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t1074_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_get_id_m6981,
	Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_set_id_m6982,
	Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6983,
	Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6984,
	Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_get_range_m6985,
	Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_set_range_m6986,
	Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6987,
	Leaderboard_t1074_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6988,
	PropertyAttribute_t1248_CustomAttributesCacheGenerator,
	TooltipAttribute_t1010_CustomAttributesCacheGenerator,
	SpaceAttribute_t1008_CustomAttributesCacheGenerator,
	RangeAttribute_t1005_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1011_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1009_CustomAttributesCacheGenerator,
	StackTraceUtility_t1251_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m7031,
	StackTraceUtility_t1251_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m7034,
	StackTraceUtility_t1251_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m7036,
	SharedBetweenAnimatorsAttribute_t1252_CustomAttributesCacheGenerator,
	ArgumentCache_t1259_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t1259_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t1259_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t1259_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t1259_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t1259_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t1263_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t1263_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t1263_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t1263_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t1263_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t1265_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t1268_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t1268_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t1269_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t1270_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t1271_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t999_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t1273_CustomAttributesCacheGenerator,
};
