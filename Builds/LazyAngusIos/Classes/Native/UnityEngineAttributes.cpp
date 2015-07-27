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
extern TypeInfo* InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t699_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		ExtensionAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t699 * tmp;
		tmp = (ExtensionAttribute_t699 *)il2cpp_codegen_object_new (ExtensionAttribute_t699_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3728(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1352 * tmp;
		tmp = (InternalsVisibleToAttribute_t1352 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1352_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7262(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1057_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1057_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var;
void AssetBundle_t1059_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1274 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1274 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7127(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var;
void AssetBundle_t1059_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1274 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1274 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7127(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AssetBundle_t1059_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void LayerMask_t789_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void LayerMask_t789_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void LayerMask_t789_CustomAttributesCacheGenerator_LayerMask_t789_LayerMask_GetMask_m5777_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void RuntimePlatform_t1063_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void RuntimePlatform_t1063_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void RuntimePlatform_t1063_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void RuntimePlatform_t1063_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void RuntimePlatform_t1063_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void SystemInfo_t1064_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m3722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void SystemInfo_t1064_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Coroutine_t844_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void ScriptableObject_t108_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t1218_il2cpp_TypeInfo_var;
void ScriptableObject_t108_CustomAttributesCacheGenerator_ScriptableObject_t108_ScriptableObject_Internal_CreateScriptableObject_m5783_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1218 * tmp;
		tmp = (WritableAttribute_t1218 *)il2cpp_codegen_object_new (WritableAttribute_t1218_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6920(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void ScriptableObject_t108_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void ScriptableObject_t108_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GcLeaderboard_t1076_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GcLeaderboard_t1076_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GcLeaderboard_t1076_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GcLeaderboard_t1076_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void MeshFilter_t688_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Mesh_t439_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1218_il2cpp_TypeInfo_var;
void Mesh_t439_CustomAttributesCacheGenerator_Mesh_t439_Mesh_Internal_Create_m5857_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1218 * tmp;
		tmp = (WritableAttribute_t1218 *)il2cpp_codegen_object_new (WritableAttribute_t1218_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6920(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Mesh_t439_CustomAttributesCacheGenerator_Mesh_set_vertices_m3585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Mesh_t439_CustomAttributesCacheGenerator_Mesh_set_triangles_m3586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Renderer_t594_CustomAttributesCacheGenerator_Renderer_set_enabled_m3434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Renderer_t594_CustomAttributesCacheGenerator_Renderer_get_material_m3413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Renderer_t594_CustomAttributesCacheGenerator_Renderer_set_material_m3415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Renderer_t594_CustomAttributesCacheGenerator_Renderer_get_bounds_m3443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Renderer_t594_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Renderer_t594_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5252(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Screen_t1078_CustomAttributesCacheGenerator_Screen_get_width_m3070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Screen_t1078_CustomAttributesCacheGenerator_Screen_get_height_m3085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Screen_t1078_CustomAttributesCacheGenerator_Screen_get_dpi_m3194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Screen_t1078_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Screen_t1078_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Screen_t1078_CustomAttributesCacheGenerator_Screen_get_orientation_m3084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Texture_t354_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Texture_t354_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1218_il2cpp_TypeInfo_var;
void Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_t68_Texture2D_Internal_Create_m5884_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1218 * tmp;
		tmp = (WritableAttribute_t1218 *)il2cpp_codegen_object_new (WritableAttribute_t1218_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6920(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_Apply_m5885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_t68_Texture2D_Apply_m5885_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_t68_Texture2D_Apply_m5885_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_Apply_m3111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RenderTexture_t1079_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RenderTexture_t1079_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUILayer_t1082_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Gradient_t1085_CustomAttributesCacheGenerator_Gradient_Init_m5896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Gradient_t1085_CustomAttributesCacheGenerator_Gradient_Cleanup_m5897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t602_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
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
void GUI_t602_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
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
void GUI_t602_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5904(CustomAttributesCache* cache)
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
void GUI_t602_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5905(CustomAttributesCache* cache)
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
void GUI_t602_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5906(CustomAttributesCache* cache)
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
void GUI_t602_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5907(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUI_t602_CustomAttributesCacheGenerator_GUI_set_changed_m5909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUI_t602_CustomAttributesCacheGenerator_GUI_get_enabled_m5910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUI_t602_CustomAttributesCacheGenerator_GUI_set_enabled_m3103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUI_t602_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUI_t602_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUI_t602_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUI_t602_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUI_t602_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUI_t602_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUI_t602_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_Label_m3081_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_Box_m3097_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_Button_m3079_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_TextField_m3082_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_TextField_m3522_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_Toggle_m3128_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_SelectionGrid_m3126_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_SelectionGrid_m5948_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginHorizontal_m3080_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginHorizontal_m5949_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginVertical_m3094_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginVertical_m5950_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginScrollView_m3102_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginScrollView_m5951_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUILayoutUtility_t601_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUILayoutUtility_t601_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var;
void GUILayoutUtility_t601_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1353 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1353 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayoutUtility_t601_CustomAttributesCacheGenerator_GUILayoutUtility_t601_GUILayoutUtility_GetRect_m5972_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void GUILayoutUtility_t601_CustomAttributesCacheGenerator_GUILayoutUtility_t601_GUILayoutUtility_GetRect_m5974_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m6016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m6020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m6024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m6025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m6026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m6027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m6028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m6029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m6031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m6033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m6037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m6038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m6039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIClip_t1101_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m6041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIClip_t1101_CustomAttributesCacheGenerator_GUIClip_Pop_m6042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISettings_t1102_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISettings_t1102_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISettings_t1102_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISettings_t1102_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISettings_t1102_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t1007_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t1007_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1735);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t1007 * tmp;
		tmp = (ExecuteInEditMode_t1007 *)il2cpp_codegen_object_new (ExecuteInEditMode_t1007_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m5652(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUISkin_t679_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUIContent_t681_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUIContent_t681_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void GUIContent_t681_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyleState_t623_CustomAttributesCacheGenerator_GUIStyleState_Init_m6111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyleState_t623_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m6112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyleState_t623_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m6113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyleState_t623_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m6114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_Init_m6117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_Cleanup_m6118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_left_m5560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_set_left_m6119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_right_m6120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_set_right_m6121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_top_m5561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_set_top_m6122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_set_bottom_m6123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m6125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m6127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Init_m6131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m6132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m6133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_name_m6134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_name_m6135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m6136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m6138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m6139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m6140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m6141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m6142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m6143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m6144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m6145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m6146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m6149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Draw_m6152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_t67_GUIStyle_Draw_m6153_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m6155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m6156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m6160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m6162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m6164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m6167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m6170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m6172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_Init_m6174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_Cleanup_m6176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_get_rawType_m5420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_get_type_m3530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_GetTypeForControl_m6177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m6179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m6181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_get_modifiers_m5416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_get_character_m5418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_get_commandName_m6182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_get_keyCode_m5417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m6183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_Use_m6185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Event_t682_CustomAttributesCacheGenerator_Event_PopEvent_m5421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t997_il2cpp_TypeInfo_var;
void EventModifiers_t1111_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1730);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t997 * tmp;
		tmp = (FlagsAttribute_t997 *)il2cpp_codegen_object_new (FlagsAttribute_t997_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5597(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Vector2_t70_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void Vector3_t451_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void Color_t285_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t1212_il2cpp_TypeInfo_var;
void Color32_t654_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t1212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2393);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t1212 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t1212 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t1212_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m6912(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Quaternion_t683_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Quaternion_t683_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m6211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Quaternion_t683_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m6214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Quaternion_t683_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m6216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Matrix4x4_t975_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m6232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m6234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m6236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m6239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m6251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m6254(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m6255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Bounds_t664_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m6272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Bounds_t664_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m6275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Bounds_t664_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m6278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Bounds_t664_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m6282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Vector4_t936_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Mathf_t625_CustomAttributesCacheGenerator_Mathf_t625_Mathf_SmoothDamp_m5479_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Mathf_t625_CustomAttributesCacheGenerator_Mathf_t625_Mathf_SmoothDamp_m5479_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t997_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t1113_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1730);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t997 * tmp;
		tmp = (FlagsAttribute_t997 *)il2cpp_codegen_object_new (FlagsAttribute_t997_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5597(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m6313(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m6314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m6315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m6316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m6317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m6318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m6319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m6320(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m6321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m6322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m6323(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var;
void Resources_t686_CustomAttributesCacheGenerator_Resources_Load_m6329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1274 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1274 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7127(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextAsset_t678_CustomAttributesCacheGenerator_TextAsset_get_text_m3513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t1117_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Shader_t1118_CustomAttributesCacheGenerator_Shader_PropertyToID_m6332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Material_t440_CustomAttributesCacheGenerator_Material_SetTexture_m6334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Material_t440_CustomAttributesCacheGenerator_Material_GetTexture_m6336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Material_t440_CustomAttributesCacheGenerator_Material_SetFloat_m6338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Material_t440_CustomAttributesCacheGenerator_Material_HasProperty_m6339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Material_t440_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m6340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1218_il2cpp_TypeInfo_var;
void Material_t440_CustomAttributesCacheGenerator_Material_t440_Material_Internal_CreateWithMaterial_m6340_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1218 * tmp;
		tmp = (WritableAttribute_t1218 *)il2cpp_codegen_object_new (WritableAttribute_t1218_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6920(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1119_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1119_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m6343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1119_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m6346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1119_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m6349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Sprite_t432_CustomAttributesCacheGenerator_Sprite_get_rect_m5347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Sprite_t432_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Sprite_t432_CustomAttributesCacheGenerator_Sprite_get_texture_m5340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Sprite_t432_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Sprite_t432_CustomAttributesCacheGenerator_Sprite_get_border_m5341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void SpriteRenderer_t511_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m6359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void SpriteRenderer_t511_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m6360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void DataUtility_t1120_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void DataUtility_t1120_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void DataUtility_t1120_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void DataUtility_t1120_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m6361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void WWW_t225_CustomAttributesCacheGenerator_WWW_DestroyWWW_m6364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void WWW_t225_CustomAttributesCacheGenerator_WWW_InitWWW_m6365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void WWW_t225_CustomAttributesCacheGenerator_WWW_EscapeURL_m3598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void WWW_t225_CustomAttributesCacheGenerator_WWW_t225_WWW_EscapeURL_m6366_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void WWW_t225_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m6367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void WWW_t225_CustomAttributesCacheGenerator_WWW_get_bytes_m6370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void WWW_t225_CustomAttributesCacheGenerator_WWW_get_error_m3266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void WWW_t225_CustomAttributesCacheGenerator_WWW_GetTexture_m6371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void WWW_t225_CustomAttributesCacheGenerator_WWW_get_isDone_m6372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void WWWForm_t72_CustomAttributesCacheGenerator_WWWForm_AddField_m3115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void WWWForm_t72_CustomAttributesCacheGenerator_WWWForm_t72_WWWForm_AddField_m6375_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void WWWForm_t72_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void WWWForm_t72_CustomAttributesCacheGenerator_WWWForm_t72_WWWForm_AddBinaryData_m6377_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void WWWForm_t72_CustomAttributesCacheGenerator_WWWForm_t72_WWWForm_AddBinaryData_m6377_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void WWWTranscoder_t1122_CustomAttributesCacheGenerator_WWWTranscoder_t1122_WWWTranscoder_URLEncode_m6381_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void WWWTranscoder_t1122_CustomAttributesCacheGenerator_WWWTranscoder_t1122_WWWTranscoder_QPEncode_m6383_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void WWWTranscoder_t1122_CustomAttributesCacheGenerator_WWWTranscoder_t1122_WWWTranscoder_SevenBitClean_m6386_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void CacheIndex_t1123_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void UnityString_t1124_CustomAttributesCacheGenerator_UnityString_t1124_UnityString_Format_m6388_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AsyncOperation_t1058_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m6390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m6395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_get_isPlaying_m5459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_get_isEditor_m5461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_get_platform_m3179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_t1125_Application_ExternalCall_m3479_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_t1125_Application_BuildInvocationForArguments_m6397_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m6398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_OpenURL_m3372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m6400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t1354_il2cpp_TypeInfo_var;
void Application_t1125_CustomAttributesCacheGenerator_Application_t1125____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t1354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2394);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t1354 * tmp;
		tmp = (SecurityCriticalAttribute_t1354 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t1354_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m7268(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Behaviour_t985_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Behaviour_t985_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Behaviour_t985_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5242(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5241(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_get_depth_m5154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_get_eventMask_m6406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m6407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m6408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m6409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_get_targetTexture_m6411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_get_clearFlags_m6412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m6413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m6414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m6415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m6416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m6417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_get_main_m3419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m6418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_GetAllCameras_m6419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m6424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m6426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var;
void CameraCallback_t1126_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2395);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1355 * tmp;
		tmp = (EditorBrowsableAttribute_t1355 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7269(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Debug_t1127_CustomAttributesCacheGenerator_Debug_Internal_Log_m6427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1218_il2cpp_TypeInfo_var;
void Debug_t1127_CustomAttributesCacheGenerator_Debug_t1127_Debug_Internal_Log_m6427_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1218 * tmp;
		tmp = (WritableAttribute_t1218 *)il2cpp_codegen_object_new (WritableAttribute_t1218_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6920(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Debug_t1127_CustomAttributesCacheGenerator_Debug_Internal_LogException_m6428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1218_il2cpp_TypeInfo_var;
void Debug_t1127_CustomAttributesCacheGenerator_Debug_t1127_Debug_Internal_LogException_m6428_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1218 * tmp;
		tmp = (WritableAttribute_t1218 *)il2cpp_codegen_object_new (WritableAttribute_t1218_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6920(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Debug_t1127_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Display_t1130_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m6454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Display_t1130_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m6455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Display_t1130_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m6456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Display_t1130_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m6457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Display_t1130_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m6458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Display_t1130_CustomAttributesCacheGenerator_Display_SetParamsImpl_m6459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Display_t1130_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m6460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Display_t1130_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m6461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void MonoBehaviour_t66_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void MonoBehaviour_t66_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void MonoBehaviour_t66_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m6462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void MonoBehaviour_t66_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void MonoBehaviour_t66_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m6464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_GetAxis_m3714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_GetButtonDown_m5232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_GetMouseButton_m3627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_get_mousePosition_m3420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_get_mousePresent_m5231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_GetTouch_m3099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_get_touchCount_m3098(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_get_compositionString_m5398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Input_t604_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m6466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t997_il2cpp_TypeInfo_var;
void HideFlags_t1133_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1730);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t997 * tmp;
		tmp = (FlagsAttribute_t997 *)il2cpp_codegen_object_new (FlagsAttribute_t997_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5597(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m6469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_Destroy_m6470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_t600_Object_Destroy_m6470_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_Destroy_m3312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_t600_Object_DestroyImmediate_m6471_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m6472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1274 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1274 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7127(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_get_name_m3167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_set_name_m5521(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m3197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_set_hideFlags_m5432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_ToString_m3885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_Instantiate_m3554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1274 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1274 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7127(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var;
void Object_t600_CustomAttributesCacheGenerator_Object_FindObjectOfType_m6478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1274 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1274 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7127(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Component_t660_CustomAttributesCacheGenerator_Component_get_transform_m3448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Component_t660_CustomAttributesCacheGenerator_Component_get_gameObject_m3166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var;
void Component_t660_CustomAttributesCacheGenerator_Component_GetComponent_m5567(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1274 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1274 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7127(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Component_t660_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m6480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var;
void Component_t660_CustomAttributesCacheGenerator_Component_GetComponent_m7271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1353 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1353 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Component_t660_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m6481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_GetComponent_m6483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1274 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1274 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7127(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m6484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_GetComponent_m7275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1353 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1353 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m6485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1274 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1274 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7127(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m6486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_get_transform_m3451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_get_layer_m5434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_set_layer_m5435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_SetActive_m3368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_get_tag_m3717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_SendMessage_m6487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_t312_GameObject_SendMessage_m6487_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_t312_GameObject_SendMessage_m6487_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m6488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_AddComponent_m6489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1274 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1274 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1274_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7127(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m6490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1218_il2cpp_TypeInfo_var;
void GameObject_t312_CustomAttributesCacheGenerator_GameObject_t312_GameObject_Internal_CreateGameObject_m6490_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1218 * tmp;
		tmp = (WritableAttribute_t1218 *)il2cpp_codegen_object_new (WritableAttribute_t1218_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6920(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m6494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m6495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m6496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m6497(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m6498(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m6499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m6500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m6501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m6502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m6503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_get_parentInternal_m6504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_set_parentInternal_m6505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_SetParent_m3555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m6506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_Rotate_m3692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_t366_Transform_Rotate_m6507_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m6508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m6509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_get_childCount_m3697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Transform_t366_CustomAttributesCacheGenerator_Transform_GetChild_m3696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Time_t1135_CustomAttributesCacheGenerator_Time_get_time_m3576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Time_t1135_CustomAttributesCacheGenerator_Time_get_deltaTime_m3599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Time_t1135_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Time_t1135_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Time_t1135_CustomAttributesCacheGenerator_Time_set_timeScale_m3373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Random_t1136_CustomAttributesCacheGenerator_Random_set_seed_m3649(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Random_t1136_CustomAttributesCacheGenerator_Random_Range_m3597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Random_t1136_CustomAttributesCacheGenerator_Random_RandomRangeInt_m6511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void PlayerPrefs_t1138_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m6514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void PlayerPrefs_t1138_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m6515(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void PlayerPrefs_t1138_CustomAttributesCacheGenerator_PlayerPrefs_t1138_PlayerPrefs_GetString_m6515_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void PlayerPrefs_t1138_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void PlayerPrefs_t1138_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Physics_t1140_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m6533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_Raycast_m6534_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_Raycast_m6534_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void Physics_t1140_CustomAttributesCacheGenerator_Physics_Raycast_m3423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_Raycast_m5320_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_Raycast_m5320_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_RaycastAll_m5257_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_RaycastAll_m5257_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_RaycastAll_m6535_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_RaycastAll_m6535_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Physics_t1140_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m6536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Collider_t663_CustomAttributesCacheGenerator_Collider_set_enabled_m3435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Collider_t663_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m6537(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_t693_Physics2D_IgnoreLayerCollision_m3609_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m6541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_Raycast_m5321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_t693_Physics2D_Raycast_m6542_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_t693_Physics2D_Raycast_m6542_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_t693_Physics2D_Raycast_m6542_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_t693_Physics2D_Raycast_m6542_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5245(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m6543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m6544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Collider2D_t525_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Collider2D_t525_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m6546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_set_clip_m3411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_Play_m6562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_t518_AudioSource_Play_m6562_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_Play_m3679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_Stop_m3412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m6563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1271_il2cpp_TypeInfo_var;
void AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_t518_AudioSource_PlayOneShot_m6563_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1271 * tmp;
		tmp = (DefaultValueAttribute_t1271 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1271_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7122(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var;
void AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1272 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1272 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1272_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7126(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void AnimationEvent_t1151_CustomAttributesCacheGenerator_AnimationEvent_t1151____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void AnimationCurve_t1155_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void AnimationCurve_t1155_CustomAttributesCacheGenerator_AnimationCurve_t1155_AnimationCurve__ctor_m6589_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AnimationCurve_t1155_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m6591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void AnimationCurve_t1155_CustomAttributesCacheGenerator_AnimationCurve_Init_m6593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t1152_CustomAttributesCacheGenerator_AnimatorStateInfo_t1152____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Animator_t566_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Animator_t566_CustomAttributesCacheGenerator_Animator_StringToHash_m6612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Animator_t566_CustomAttributesCacheGenerator_Animator_SetIntegerString_m6613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Animator_t566_CustomAttributesCacheGenerator_Animator_SetTriggerString_m6614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Animator_t566_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m6615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextMesh_t363_CustomAttributesCacheGenerator_TextMesh_get_text_m3417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextMesh_t363_CustomAttributesCacheGenerator_TextMesh_set_text_m3418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void CharacterInfo_t1161_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void CharacterInfo_t1161_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void CharacterInfo_t1161_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t703_il2cpp_TypeInfo_var;
void CharacterInfo_t1161_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t703 * tmp;
		tmp = (ObsoleteAttribute_t703 *)il2cpp_codegen_object_new (ObsoleteAttribute_t703_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3835(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Font_t804_CustomAttributesCacheGenerator_Font_get_material_m5525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Font_t804_CustomAttributesCacheGenerator_Font_HasCharacter_m5419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Font_t804_CustomAttributesCacheGenerator_Font_get_dynamic_m5527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Font_t804_CustomAttributesCacheGenerator_Font_get_fontSize_m5528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t1162_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2395);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1355 * tmp;
		tmp = (EditorBrowsableAttribute_t1355 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7269(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_Init_m6643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6649(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void Canvas_t418_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasGroup_t546_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasGroup_t546_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasGroup_t546_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasGroup_t546_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransformUtility_t959_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransformUtility_t959_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1211_il2cpp_TypeInfo_var;
void RectTransformUtility_t959_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1211 * tmp;
		tmp = (WrapperlessIcall_t1211 *)il2cpp_codegen_object_new (WrapperlessIcall_t1211_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6911(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1166_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t1166_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t1166_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t1166_CustomAttributesCacheGenerator_Request_get_sourceId_m6682(CustomAttributesCache* cache)
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
void Request_t1166_CustomAttributesCacheGenerator_Request_get_appId_m6683(CustomAttributesCache* cache)
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
void Request_t1166_CustomAttributesCacheGenerator_Request_get_domain_m6684(CustomAttributesCache* cache)
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
void Response_t1168_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
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
void Response_t1168_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
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
void Response_t1168_CustomAttributesCacheGenerator_Response_get_success_m6693(CustomAttributesCache* cache)
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
void Response_t1168_CustomAttributesCacheGenerator_Response_set_success_m6694(CustomAttributesCache* cache)
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
void Response_t1168_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6695(CustomAttributesCache* cache)
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
void Response_t1168_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6696(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6701(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6702(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6703(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6704(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6705(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6706(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6707(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6708(CustomAttributesCache* cache)
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
void CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6709(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6712(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6713(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6714(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6715(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6716(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6717(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6718(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6719(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6720(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6721(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6722(CustomAttributesCache* cache)
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
void CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6723(CustomAttributesCache* cache)
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
void JoinMatchRequest_t1173_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchRequest_t1173_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchRequest_t1173_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6727(CustomAttributesCache* cache)
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
void JoinMatchRequest_t1173_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6728(CustomAttributesCache* cache)
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
void JoinMatchRequest_t1173_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6729(CustomAttributesCache* cache)
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
void JoinMatchRequest_t1173_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6730(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6733(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6734(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6735(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6736(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6737(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6738(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6739(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6740(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6741(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6742(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6743(CustomAttributesCache* cache)
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
void JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6744(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t1175_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t1175_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6748(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t1175_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6749(CustomAttributesCache* cache)
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
void DropConnectionRequest_t1176_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DropConnectionRequest_t1176_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DropConnectionRequest_t1176_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6752(CustomAttributesCache* cache)
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
void DropConnectionRequest_t1176_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6753(CustomAttributesCache* cache)
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
void DropConnectionRequest_t1176_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6754(CustomAttributesCache* cache)
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
void DropConnectionRequest_t1176_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6755(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6758(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6759(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6760(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6761(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6762(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6763(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6764(CustomAttributesCache* cache)
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
void ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6765(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6768(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6769(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6770(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6771(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6772(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6773(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6777(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6778(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_name_m6779(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_name_m6780(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6781(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6782(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6783(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6784(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6785(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6786(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6787(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6788(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6789(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6790(CustomAttributesCache* cache)
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
void MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6791(CustomAttributesCache* cache)
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
void ListMatchResponse_t1182_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchResponse_t1182_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6795(CustomAttributesCache* cache)
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
void ListMatchResponse_t1182_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6796(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t1357_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t1183_il2cpp_TypeInfo_var;
void AppID_t1183_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2396);
		AppID_t1183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1357 * tmp;
		tmp = (DefaultValueAttribute_t1357 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1357_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7286(tmp, Box(AppID_t1183_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t1357_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t1184_il2cpp_TypeInfo_var;
void SourceID_t1184_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2396);
		SourceID_t1184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1357 * tmp;
		tmp = (DefaultValueAttribute_t1357 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1357_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7286(tmp, Box(SourceID_t1184_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t1357_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t1185_il2cpp_TypeInfo_var;
void NetworkID_t1185_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2396);
		NetworkID_t1185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1357 * tmp;
		tmp = (DefaultValueAttribute_t1357 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1357_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7286(tmp, Box(NetworkID_t1185_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t1357_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t1186_il2cpp_TypeInfo_var;
void NodeID_t1186_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2396);
		NodeID_t1186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t1357 * tmp;
		tmp = (DefaultValueAttribute_t1357 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1357_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7286(tmp, Box(NodeID_t1186_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var;
void NetworkMatch_t1191_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m7287(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1359_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1359_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m7293(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1359_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m7294(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1359_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m7296(CustomAttributesCache* cache)
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
extern TypeInfo* EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var;
void JsonArray_t1192_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2395);
		GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2397);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1355 * tmp;
		tmp = (EditorBrowsableAttribute_t1355 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7269(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1360 * tmp;
		tmp = (GeneratedCodeAttribute_t1360 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7297(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void JsonObject_t1193_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2395);
		GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2397);
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1355 * tmp;
		tmp = (EditorBrowsableAttribute_t1355 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7269(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1360 * tmp;
		tmp = (GeneratedCodeAttribute_t1360 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7297(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var;
void SimpleJson_t1196_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2397);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1360 * tmp;
		tmp = (GeneratedCodeAttribute_t1360 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7297(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var;
void SimpleJson_t1196_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1361 * tmp;
		tmp = (SuppressMessageAttribute_t1361 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7298(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7299(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var;
void SimpleJson_t1196_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1361 * tmp;
		tmp = (SuppressMessageAttribute_t1361 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7298(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var;
void SimpleJson_t1196_CustomAttributesCacheGenerator_SimpleJson_t1196____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2395);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1355 * tmp;
		tmp = (EditorBrowsableAttribute_t1355 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1355_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7269(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1194_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2397);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1360 * tmp;
		tmp = (GeneratedCodeAttribute_t1360 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7297(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1194_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1361 * tmp;
		tmp = (SuppressMessageAttribute_t1361 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7298(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7299(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1195_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2397);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1360 * tmp;
		tmp = (GeneratedCodeAttribute_t1360 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7297(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1195_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1361 * tmp;
		tmp = (SuppressMessageAttribute_t1361 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7298(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7299(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1195_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1361 * tmp;
		tmp = (SuppressMessageAttribute_t1361 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1361_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7298(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7299(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var;
void ReflectionUtils_t1210_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2397);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1360 * tmp;
		tmp = (GeneratedCodeAttribute_t1360 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1360_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7297(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void ReflectionUtils_t1210_CustomAttributesCacheGenerator_ReflectionUtils_t1210_ReflectionUtils_GetConstructorInfo_m6895_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void ReflectionUtils_t1210_CustomAttributesCacheGenerator_ReflectionUtils_t1210_ReflectionUtils_GetContructor_m6900_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void ReflectionUtils_t1210_CustomAttributesCacheGenerator_ReflectionUtils_t1210_ReflectionUtils_GetConstructorByReflection_m6902_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t1362_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1203_CustomAttributesCacheGenerator_ConstructorDelegate_t1203_ConstructorDelegate_Invoke_m6880_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t700_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1203_CustomAttributesCacheGenerator_ConstructorDelegate_t1203_ConstructorDelegate_BeginInvoke_m6881_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t700 * tmp;
		tmp = (ParamArrayAttribute_t700 *)il2cpp_codegen_object_new (ParamArrayAttribute_t700_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3747(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1205_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1206_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1207_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1208_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1209_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t1212_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1008_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7324(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void RequireComponent_t1002_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7325(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void WritableAttribute_t1218_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7325(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t1219_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var;
void GUIStateObjects_t1230_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1353 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1353 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1233_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void Achievement_t1233_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
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
void Achievement_t1233_CustomAttributesCacheGenerator_Achievement_get_id_m6957(CustomAttributesCache* cache)
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
void Achievement_t1233_CustomAttributesCacheGenerator_Achievement_set_id_m6958(CustomAttributesCache* cache)
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
void Achievement_t1233_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6959(CustomAttributesCache* cache)
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
void Achievement_t1233_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6960(CustomAttributesCache* cache)
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
void AchievementDescription_t1234_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void AchievementDescription_t1234_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6967(CustomAttributesCache* cache)
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
void AchievementDescription_t1234_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6968(CustomAttributesCache* cache)
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
void Score_t1235_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
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
void Score_t1235_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
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
void Score_t1235_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6977(CustomAttributesCache* cache)
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
void Score_t1235_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6978(CustomAttributesCache* cache)
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
void Score_t1235_CustomAttributesCacheGenerator_Score_get_value_m6979(CustomAttributesCache* cache)
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
void Score_t1235_CustomAttributesCacheGenerator_Score_set_value_m6980(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_get_id_m6988(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_set_id_m6989(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6990(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6991(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_get_range_m6992(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_set_range_m6993(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6994(CustomAttributesCache* cache)
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
void Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6995(CustomAttributesCache* cache)
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
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void PropertyAttribute_t1249_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7324(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7325(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void TooltipAttribute_t1011_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7324(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7325(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void SpaceAttribute_t1009_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7324(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7325(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void RangeAttribute_t1006_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7324(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7325(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1012_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7324(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7325(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1010_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7324(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7325(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var;
void StackTraceUtility_t1252_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m7038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1353 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1353 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var;
void StackTraceUtility_t1252_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m7041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1353 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1353 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var;
void StackTraceUtility_t1252_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m7043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1353 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1353 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1353_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t1253_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7325(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
void ArgumentCache_t1260_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void ArgumentCache_t1260_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void ArgumentCache_t1260_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void ArgumentCache_t1260_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void ArgumentCache_t1260_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void ArgumentCache_t1260_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
void PersistentCall_t1264_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void PersistentCall_t1264_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
void PersistentCall_t1264_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void PersistentCall_t1264_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void PersistentCall_t1264_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void PersistentCallGroup_t1266_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var;
void UnityEventBase_t1269_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1732);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1000 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1000 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1000_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5616(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t701_il2cpp_TypeInfo_var;
void UnityEventBase_t1269_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t701 * tmp;
		tmp = (SerializeField_t701 *)il2cpp_codegen_object_new (SerializeField_t701_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3748(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t999_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t1270_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1731);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t999 * tmp;
		tmp = (AddComponentMenu_t999 *)il2cpp_codegen_object_new (AddComponentMenu_t999_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t1271_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t1272_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1000_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7325(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m7324(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t704_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t1274_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t704 * tmp;
		tmp = (AttributeUsageAttribute_t704 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t704_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3865(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[790] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t1057_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5765,
	AssetBundleCreateRequest_t1057_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5766,
	AssetBundle_t1059_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5770,
	AssetBundle_t1059_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5771,
	AssetBundle_t1059_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5772,
	LayerMask_t789_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5775,
	LayerMask_t789_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5776,
	LayerMask_t789_CustomAttributesCacheGenerator_LayerMask_t789_LayerMask_GetMask_m5777_Arg0_ParameterInfo,
	RuntimePlatform_t1063_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t1063_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t1063_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t1063_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t1063_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t1064_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m3722,
	SystemInfo_t1064_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5778,
	Coroutine_t844_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5781,
	ScriptableObject_t108_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5783,
	ScriptableObject_t108_CustomAttributesCacheGenerator_ScriptableObject_t108_ScriptableObject_Internal_CreateScriptableObject_m5783_Arg0_ParameterInfo,
	ScriptableObject_t108_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5784,
	ScriptableObject_t108_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5786,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5791,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5792,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5793,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5794,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5795,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5796,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5797,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5798,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5799,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5800,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5801,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5802,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5803,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5804,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5805,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5806,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5807,
	GameCenterPlatform_t698_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5809,
	GcLeaderboard_t1076_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5853,
	GcLeaderboard_t1076_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5854,
	GcLeaderboard_t1076_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5855,
	GcLeaderboard_t1076_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5856,
	MeshFilter_t688_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3584,
	Mesh_t439_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5857,
	Mesh_t439_CustomAttributesCacheGenerator_Mesh_t439_Mesh_Internal_Create_m5857_Arg0_ParameterInfo,
	Mesh_t439_CustomAttributesCacheGenerator_Mesh_set_vertices_m3585,
	Mesh_t439_CustomAttributesCacheGenerator_Mesh_set_triangles_m3586,
	Renderer_t594_CustomAttributesCacheGenerator_Renderer_set_enabled_m3434,
	Renderer_t594_CustomAttributesCacheGenerator_Renderer_get_material_m3413,
	Renderer_t594_CustomAttributesCacheGenerator_Renderer_set_material_m3415,
	Renderer_t594_CustomAttributesCacheGenerator_Renderer_get_bounds_m3443,
	Renderer_t594_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5251,
	Renderer_t594_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5252,
	Screen_t1078_CustomAttributesCacheGenerator_Screen_get_width_m3070,
	Screen_t1078_CustomAttributesCacheGenerator_Screen_get_height_m3085,
	Screen_t1078_CustomAttributesCacheGenerator_Screen_get_dpi_m3194,
	Screen_t1078_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3509,
	Screen_t1078_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3510,
	Screen_t1078_CustomAttributesCacheGenerator_Screen_get_orientation_m3084,
	Texture_t354_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5879,
	Texture_t354_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5880,
	Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5884,
	Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_t68_Texture2D_Internal_Create_m5884_Arg0_ParameterInfo,
	Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5293,
	Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5369,
	Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_Apply_m5885,
	Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_t68_Texture2D_Apply_m5885_Arg0_ParameterInfo,
	Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_t68_Texture2D_Apply_m5885_Arg1_ParameterInfo,
	Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_Apply_m3111,
	Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3110,
	Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5886,
	Texture2D_t68_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3112,
	RenderTexture_t1079_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5887,
	RenderTexture_t1079_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5888,
	GUILayer_t1082_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5892,
	Gradient_t1085_CustomAttributesCacheGenerator_Gradient_Init_m5896,
	Gradient_t1085_CustomAttributesCacheGenerator_Gradient_Cleanup_m5897,
	GUI_t602_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t602_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t602_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5904,
	GUI_t602_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5905,
	GUI_t602_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5906,
	GUI_t602_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5907,
	GUI_t602_CustomAttributesCacheGenerator_GUI_set_changed_m5909,
	GUI_t602_CustomAttributesCacheGenerator_GUI_get_enabled_m5910,
	GUI_t602_CustomAttributesCacheGenerator_GUI_set_enabled_m3103,
	GUI_t602_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5912,
	GUI_t602_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5915,
	GUI_t602_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5918,
	GUI_t602_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5925,
	GUI_t602_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5932,
	GUI_t602_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5934,
	GUI_t602_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5941,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_Label_m3081_Arg1_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_Box_m3097_Arg1_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_Button_m3079_Arg1_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_TextField_m3082_Arg1_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_TextField_m3522_Arg2_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_Toggle_m3128_Arg2_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_SelectionGrid_m3126_Arg3_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_SelectionGrid_m5948_Arg4_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginHorizontal_m3080_Arg0_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginHorizontal_m5949_Arg2_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginVertical_m3094_Arg0_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginVertical_m5950_Arg2_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginScrollView_m3102_Arg1_ParameterInfo,
	GUILayout_t1088_CustomAttributesCacheGenerator_GUILayout_t1088_GUILayout_BeginScrollView_m5951_Arg6_ParameterInfo,
	GUILayoutUtility_t601_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5966,
	GUILayoutUtility_t601_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5968,
	GUILayoutUtility_t601_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5969,
	GUILayoutUtility_t601_CustomAttributesCacheGenerator_GUILayoutUtility_t601_GUILayoutUtility_GetRect_m5972_Arg2_ParameterInfo,
	GUILayoutUtility_t601_CustomAttributesCacheGenerator_GUILayoutUtility_t601_GUILayoutUtility_GetRect_m5974_Arg3_ParameterInfo,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m6016,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m6020,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m6024,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m6025,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m6026,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m6027,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m6028,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m6029,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m6031,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m6033,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m6037,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m6038,
	GUIUtility_t1100_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m6039,
	GUIClip_t1101_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m6041,
	GUIClip_t1101_CustomAttributesCacheGenerator_GUIClip_Pop_m6042,
	GUISettings_t1102_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t1102_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t1102_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t1102_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t1102_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t679_CustomAttributesCacheGenerator,
	GUISkin_t679_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t679_CustomAttributesCacheGenerator_m_box,
	GUISkin_t679_CustomAttributesCacheGenerator_m_button,
	GUISkin_t679_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t679_CustomAttributesCacheGenerator_m_label,
	GUISkin_t679_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t679_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t679_CustomAttributesCacheGenerator_m_window,
	GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t679_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t679_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t679_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t679_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t679_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t679_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t679_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t679_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t679_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t679_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t681_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t681_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t681_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t623_CustomAttributesCacheGenerator_GUIStyleState_Init_m6111,
	GUIStyleState_t623_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m6112,
	GUIStyleState_t623_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m6113,
	GUIStyleState_t623_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m6114,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_Init_m6117,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_Cleanup_m6118,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_left_m5560,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_set_left_m6119,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_right_m6120,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_set_right_m6121,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_top_m5561,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_set_top_m6122,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3533,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_set_bottom_m6123,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5554,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5555,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m6125,
	RectOffset_t597_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m6127,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Init_m6131,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m6132,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m6133,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_name_m6134,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_name_m6135,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m6136,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m6138,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m6139,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m6140,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3071,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m6141,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3072,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m6142,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m6143,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m6144,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3076,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m6145,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3075,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m6146,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3173,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3174,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m6149,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Draw_m6152,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_t67_GUIStyle_Draw_m6153_Arg3_ParameterInfo,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m6155,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m6156,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m6160,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m6162,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m6164,
	GUIStyle_t67_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m6167,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m6170,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m6172,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5456,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5457,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg1_ParameterInfo,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg2_ParameterInfo,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg3_ParameterInfo,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg4_ParameterInfo,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg5_ParameterInfo,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_t839_TouchScreenKeyboard_Open_m6173_Arg6_ParameterInfo,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5396,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5397,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5455,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5395,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5454,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5407,
	TouchScreenKeyboard_t839_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5406,
	Event_t682_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t682_CustomAttributesCacheGenerator_Event_Init_m6174,
	Event_t682_CustomAttributesCacheGenerator_Event_Cleanup_m6176,
	Event_t682_CustomAttributesCacheGenerator_Event_get_rawType_m5420,
	Event_t682_CustomAttributesCacheGenerator_Event_get_type_m3530,
	Event_t682_CustomAttributesCacheGenerator_Event_GetTypeForControl_m6177,
	Event_t682_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m6179,
	Event_t682_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m6181,
	Event_t682_CustomAttributesCacheGenerator_Event_get_modifiers_m5416,
	Event_t682_CustomAttributesCacheGenerator_Event_get_character_m5418,
	Event_t682_CustomAttributesCacheGenerator_Event_get_commandName_m6182,
	Event_t682_CustomAttributesCacheGenerator_Event_get_keyCode_m5417,
	Event_t682_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m6183,
	Event_t682_CustomAttributesCacheGenerator_Event_Use_m6185,
	Event_t682_CustomAttributesCacheGenerator_Event_PopEvent_m5421,
	EventModifiers_t1111_CustomAttributesCacheGenerator,
	Vector2_t70_CustomAttributesCacheGenerator,
	Vector3_t451_CustomAttributesCacheGenerator,
	Color_t285_CustomAttributesCacheGenerator,
	Color32_t654_CustomAttributesCacheGenerator,
	Quaternion_t683_CustomAttributesCacheGenerator,
	Quaternion_t683_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m6211,
	Quaternion_t683_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m6214,
	Quaternion_t683_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m6216,
	Matrix4x4_t975_CustomAttributesCacheGenerator,
	Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m6232,
	Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m6234,
	Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m6236,
	Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m6239,
	Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m6251,
	Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m6254,
	Matrix4x4_t975_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m6255,
	Bounds_t664_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m6272,
	Bounds_t664_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m6275,
	Bounds_t664_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m6278,
	Bounds_t664_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m6282,
	Vector4_t936_CustomAttributesCacheGenerator,
	Mathf_t625_CustomAttributesCacheGenerator_Mathf_t625_Mathf_SmoothDamp_m5479_Arg4_ParameterInfo,
	Mathf_t625_CustomAttributesCacheGenerator_Mathf_t625_Mathf_SmoothDamp_m5479_Arg5_ParameterInfo,
	DrivenTransformProperties_t1113_CustomAttributesCacheGenerator,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m6313,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m6314,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m6315,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m6316,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m6317,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m6318,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m6319,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m6320,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m6321,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m6322,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m6323,
	Resources_t686_CustomAttributesCacheGenerator_Resources_Load_m6329,
	TextAsset_t678_CustomAttributesCacheGenerator_TextAsset_get_text_m3513,
	SerializePrivateVariables_t1117_CustomAttributesCacheGenerator,
	Shader_t1118_CustomAttributesCacheGenerator_Shader_PropertyToID_m6332,
	Material_t440_CustomAttributesCacheGenerator_Material_SetTexture_m6334,
	Material_t440_CustomAttributesCacheGenerator_Material_GetTexture_m6336,
	Material_t440_CustomAttributesCacheGenerator_Material_SetFloat_m6338,
	Material_t440_CustomAttributesCacheGenerator_Material_HasProperty_m6339,
	Material_t440_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m6340,
	Material_t440_CustomAttributesCacheGenerator_Material_t440_Material_Internal_CreateWithMaterial_m6340_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t1119_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t1119_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m6343,
	SphericalHarmonicsL2_t1119_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m6346,
	SphericalHarmonicsL2_t1119_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m6349,
	Sprite_t432_CustomAttributesCacheGenerator_Sprite_get_rect_m5347,
	Sprite_t432_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5343,
	Sprite_t432_CustomAttributesCacheGenerator_Sprite_get_texture_m5340,
	Sprite_t432_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5366,
	Sprite_t432_CustomAttributesCacheGenerator_Sprite_get_border_m5341,
	SpriteRenderer_t511_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m6359,
	SpriteRenderer_t511_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m6360,
	DataUtility_t1120_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5354,
	DataUtility_t1120_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5353,
	DataUtility_t1120_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5346,
	DataUtility_t1120_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m6361,
	WWW_t225_CustomAttributesCacheGenerator_WWW_DestroyWWW_m6364,
	WWW_t225_CustomAttributesCacheGenerator_WWW_InitWWW_m6365,
	WWW_t225_CustomAttributesCacheGenerator_WWW_EscapeURL_m3598,
	WWW_t225_CustomAttributesCacheGenerator_WWW_t225_WWW_EscapeURL_m6366_Arg1_ParameterInfo,
	WWW_t225_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m6367,
	WWW_t225_CustomAttributesCacheGenerator_WWW_get_bytes_m6370,
	WWW_t225_CustomAttributesCacheGenerator_WWW_get_error_m3266,
	WWW_t225_CustomAttributesCacheGenerator_WWW_GetTexture_m6371,
	WWW_t225_CustomAttributesCacheGenerator_WWW_get_isDone_m6372,
	WWWForm_t72_CustomAttributesCacheGenerator_WWWForm_AddField_m3115,
	WWWForm_t72_CustomAttributesCacheGenerator_WWWForm_t72_WWWForm_AddField_m6375_Arg2_ParameterInfo,
	WWWForm_t72_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3114,
	WWWForm_t72_CustomAttributesCacheGenerator_WWWForm_t72_WWWForm_AddBinaryData_m6377_Arg2_ParameterInfo,
	WWWForm_t72_CustomAttributesCacheGenerator_WWWForm_t72_WWWForm_AddBinaryData_m6377_Arg3_ParameterInfo,
	WWWTranscoder_t1122_CustomAttributesCacheGenerator_WWWTranscoder_t1122_WWWTranscoder_URLEncode_m6381_Arg1_ParameterInfo,
	WWWTranscoder_t1122_CustomAttributesCacheGenerator_WWWTranscoder_t1122_WWWTranscoder_QPEncode_m6383_Arg1_ParameterInfo,
	WWWTranscoder_t1122_CustomAttributesCacheGenerator_WWWTranscoder_t1122_WWWTranscoder_SevenBitClean_m6386_Arg1_ParameterInfo,
	CacheIndex_t1123_CustomAttributesCacheGenerator,
	UnityString_t1124_CustomAttributesCacheGenerator_UnityString_t1124_UnityString_Format_m6388_Arg1_ParameterInfo,
	AsyncOperation_t1058_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m6390,
	Application_t1125_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3165,
	Application_t1125_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m6395,
	Application_t1125_CustomAttributesCacheGenerator_Application_get_isPlaying_m5459,
	Application_t1125_CustomAttributesCacheGenerator_Application_get_isEditor_m5461,
	Application_t1125_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3478,
	Application_t1125_CustomAttributesCacheGenerator_Application_get_platform_m3179,
	Application_t1125_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3684,
	Application_t1125_CustomAttributesCacheGenerator_Application_t1125_Application_ExternalCall_m3479_Arg1_ParameterInfo,
	Application_t1125_CustomAttributesCacheGenerator_Application_t1125_Application_BuildInvocationForArguments_m6397_Arg1_ParameterInfo,
	Application_t1125_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m6398,
	Application_t1125_CustomAttributesCacheGenerator_Application_OpenURL_m3372,
	Application_t1125_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m6400,
	Application_t1125_CustomAttributesCacheGenerator_Application_t1125____persistentDataPath_PropertyInfo,
	Behaviour_t985_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3663,
	Behaviour_t985_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5429,
	Behaviour_t985_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5189,
	Camera_t480_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5242,
	Camera_t480_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5241,
	Camera_t480_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3702,
	Camera_t480_CustomAttributesCacheGenerator_Camera_get_depth_m5154,
	Camera_t480_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5255,
	Camera_t480_CustomAttributesCacheGenerator_Camera_get_eventMask_m6406,
	Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m6407,
	Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m6408,
	Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m6409,
	Camera_t480_CustomAttributesCacheGenerator_Camera_get_targetTexture_m6411,
	Camera_t480_CustomAttributesCacheGenerator_Camera_get_clearFlags_m6412,
	Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m6413,
	Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m6414,
	Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m6415,
	Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m6416,
	Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m6417,
	Camera_t480_CustomAttributesCacheGenerator_Camera_get_main_m3419,
	Camera_t480_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m6418,
	Camera_t480_CustomAttributesCacheGenerator_Camera_GetAllCameras_m6419,
	Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m6424,
	Camera_t480_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m6426,
	CameraCallback_t1126_CustomAttributesCacheGenerator,
	Debug_t1127_CustomAttributesCacheGenerator_Debug_Internal_Log_m6427,
	Debug_t1127_CustomAttributesCacheGenerator_Debug_t1127_Debug_Internal_Log_m6427_Arg2_ParameterInfo,
	Debug_t1127_CustomAttributesCacheGenerator_Debug_Internal_LogException_m6428,
	Debug_t1127_CustomAttributesCacheGenerator_Debug_t1127_Debug_Internal_LogException_m6428_Arg1_ParameterInfo,
	Debug_t1127_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3477,
	Display_t1130_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m6454,
	Display_t1130_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m6455,
	Display_t1130_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m6456,
	Display_t1130_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m6457,
	Display_t1130_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m6458,
	Display_t1130_CustomAttributesCacheGenerator_Display_SetParamsImpl_m6459,
	Display_t1130_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m6460,
	Display_t1130_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m6461,
	MonoBehaviour_t66_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3427,
	MonoBehaviour_t66_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3426,
	MonoBehaviour_t66_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m6462,
	MonoBehaviour_t66_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6463,
	MonoBehaviour_t66_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m6464,
	Input_t604_CustomAttributesCacheGenerator_Input_GetAxis_m3714,
	Input_t604_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5233,
	Input_t604_CustomAttributesCacheGenerator_Input_GetButtonDown_m5232,
	Input_t604_CustomAttributesCacheGenerator_Input_GetMouseButton_m3627,
	Input_t604_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3422,
	Input_t604_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3626,
	Input_t604_CustomAttributesCacheGenerator_Input_get_mousePosition_m3420,
	Input_t604_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5206,
	Input_t604_CustomAttributesCacheGenerator_Input_get_mousePresent_m5231,
	Input_t604_CustomAttributesCacheGenerator_Input_GetTouch_m3099,
	Input_t604_CustomAttributesCacheGenerator_Input_get_touchCount_m3098,
	Input_t604_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5458,
	Input_t604_CustomAttributesCacheGenerator_Input_get_compositionString_m5398,
	Input_t604_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m6466,
	HideFlags_t1133_CustomAttributesCacheGenerator,
	Object_t600_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m6469,
	Object_t600_CustomAttributesCacheGenerator_Object_Destroy_m6470,
	Object_t600_CustomAttributesCacheGenerator_Object_t600_Object_Destroy_m6470_Arg1_ParameterInfo,
	Object_t600_CustomAttributesCacheGenerator_Object_Destroy_m3312,
	Object_t600_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6471,
	Object_t600_CustomAttributesCacheGenerator_Object_t600_Object_DestroyImmediate_m6471_Arg1_ParameterInfo,
	Object_t600_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5460,
	Object_t600_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m6472,
	Object_t600_CustomAttributesCacheGenerator_Object_get_name_m3167,
	Object_t600_CustomAttributesCacheGenerator_Object_set_name_m5521,
	Object_t600_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m3197,
	Object_t600_CustomAttributesCacheGenerator_Object_set_hideFlags_m5432,
	Object_t600_CustomAttributesCacheGenerator_Object_ToString_m3885,
	Object_t600_CustomAttributesCacheGenerator_Object_Instantiate_m3554,
	Object_t600_CustomAttributesCacheGenerator_Object_FindObjectOfType_m6478,
	Component_t660_CustomAttributesCacheGenerator_Component_get_transform_m3448,
	Component_t660_CustomAttributesCacheGenerator_Component_get_gameObject_m3166,
	Component_t660_CustomAttributesCacheGenerator_Component_GetComponent_m5567,
	Component_t660_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m6480,
	Component_t660_CustomAttributesCacheGenerator_Component_GetComponent_m7271,
	Component_t660_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m6481,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_GetComponent_m6483,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m6484,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_GetComponent_m7275,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m6485,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m6486,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_get_transform_m3451,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_get_layer_m5434,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_set_layer_m5435,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_SetActive_m3368,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5190,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_get_tag_m3717,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3622,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_SendMessage_m6487,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_t312_GameObject_SendMessage_m6487_Arg1_ParameterInfo,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_t312_GameObject_SendMessage_m6487_Arg2_ParameterInfo,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m6488,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_AddComponent_m6489,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m6490,
	GameObject_t312_CustomAttributesCacheGenerator_GameObject_t312_GameObject_Internal_CreateGameObject_m6490_Arg0_ParameterInfo,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m6494,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m6495,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m6496,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m6497,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m6498,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m6499,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m6500,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m6501,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m6502,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m6503,
	Transform_t366_CustomAttributesCacheGenerator_Transform_get_parentInternal_m6504,
	Transform_t366_CustomAttributesCacheGenerator_Transform_set_parentInternal_m6505,
	Transform_t366_CustomAttributesCacheGenerator_Transform_SetParent_m3555,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m6506,
	Transform_t366_CustomAttributesCacheGenerator_Transform_Rotate_m3692,
	Transform_t366_CustomAttributesCacheGenerator_Transform_t366_Transform_Rotate_m6507_Arg1_ParameterInfo,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m6508,
	Transform_t366_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m6509,
	Transform_t366_CustomAttributesCacheGenerator_Transform_get_childCount_m3697,
	Transform_t366_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5433,
	Transform_t366_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3556,
	Transform_t366_CustomAttributesCacheGenerator_Transform_GetChild_m3696,
	Time_t1135_CustomAttributesCacheGenerator_Time_get_time_m3576,
	Time_t1135_CustomAttributesCacheGenerator_Time_get_deltaTime_m3599,
	Time_t1135_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5235,
	Time_t1135_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5267,
	Time_t1135_CustomAttributesCacheGenerator_Time_set_timeScale_m3373,
	Random_t1136_CustomAttributesCacheGenerator_Random_set_seed_m3649,
	Random_t1136_CustomAttributesCacheGenerator_Random_Range_m3597,
	Random_t1136_CustomAttributesCacheGenerator_Random_RandomRangeInt_m6511,
	PlayerPrefs_t1138_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m6514,
	PlayerPrefs_t1138_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m6515,
	PlayerPrefs_t1138_CustomAttributesCacheGenerator_PlayerPrefs_t1138_PlayerPrefs_GetString_m6515_Arg1_ParameterInfo,
	PlayerPrefs_t1138_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3332,
	PlayerPrefs_t1138_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3331,
	Physics_t1140_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m6533,
	Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_Raycast_m6534_Arg3_ParameterInfo,
	Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_Raycast_m6534_Arg4_ParameterInfo,
	Physics_t1140_CustomAttributesCacheGenerator_Physics_Raycast_m3423,
	Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_Raycast_m5320_Arg2_ParameterInfo,
	Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_Raycast_m5320_Arg3_ParameterInfo,
	Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_RaycastAll_m5257_Arg1_ParameterInfo,
	Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_RaycastAll_m5257_Arg2_ParameterInfo,
	Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_RaycastAll_m6535_Arg2_ParameterInfo,
	Physics_t1140_CustomAttributesCacheGenerator_Physics_t1140_Physics_RaycastAll_m6535_Arg3_ParameterInfo,
	Physics_t1140_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m6536,
	Collider_t663_CustomAttributesCacheGenerator_Collider_set_enabled_m3435,
	Collider_t663_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m6537,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3609,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_t693_Physics2D_IgnoreLayerCollision_m3609_Arg2_ParameterInfo,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m6541,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_Raycast_m5321,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_t693_Physics2D_Raycast_m6542_Arg2_ParameterInfo,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_t693_Physics2D_Raycast_m6542_Arg3_ParameterInfo,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_t693_Physics2D_Raycast_m6542_Arg4_ParameterInfo,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_t693_Physics2D_Raycast_m6542_Arg5_ParameterInfo,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5245,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m6543,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3621,
	Physics2D_t693_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m6544,
	Collider2D_t525_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3681,
	Collider2D_t525_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m6546,
	AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_set_clip_m3411,
	AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_Play_m6562,
	AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_t518_AudioSource_Play_m6562_Arg0_ParameterInfo,
	AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_Play_m3679,
	AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3695,
	AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_Stop_m3412,
	AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3680,
	AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m6563,
	AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_t518_AudioSource_PlayOneShot_m6563_Arg1_ParameterInfo,
	AudioSource_t518_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3425,
	AnimationEvent_t1151_CustomAttributesCacheGenerator_AnimationEvent_t1151____data_PropertyInfo,
	AnimationCurve_t1155_CustomAttributesCacheGenerator,
	AnimationCurve_t1155_CustomAttributesCacheGenerator_AnimationCurve_t1155_AnimationCurve__ctor_m6589_Arg0_ParameterInfo,
	AnimationCurve_t1155_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m6591,
	AnimationCurve_t1155_CustomAttributesCacheGenerator_AnimationCurve_Init_m6593,
	AnimatorStateInfo_t1152_CustomAttributesCacheGenerator_AnimatorStateInfo_t1152____nameHash_PropertyInfo,
	Animator_t566_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5513,
	Animator_t566_CustomAttributesCacheGenerator_Animator_StringToHash_m6612,
	Animator_t566_CustomAttributesCacheGenerator_Animator_SetIntegerString_m6613,
	Animator_t566_CustomAttributesCacheGenerator_Animator_SetTriggerString_m6614,
	Animator_t566_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m6615,
	TextMesh_t363_CustomAttributesCacheGenerator_TextMesh_get_text_m3417,
	TextMesh_t363_CustomAttributesCacheGenerator_TextMesh_set_text_m3418,
	CharacterInfo_t1161_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t1161_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t1161_CustomAttributesCacheGenerator_width,
	CharacterInfo_t1161_CustomAttributesCacheGenerator_flipped,
	Font_t804_CustomAttributesCacheGenerator_Font_get_material_m5525,
	Font_t804_CustomAttributesCacheGenerator_Font_HasCharacter_m5419,
	Font_t804_CustomAttributesCacheGenerator_Font_get_dynamic_m5527,
	Font_t804_CustomAttributesCacheGenerator_Font_get_fontSize_m5528,
	FontTextureRebuildCallback_t1162_CustomAttributesCacheGenerator,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_Init_m6643,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6644,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6647,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5431,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6648,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6649,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6650,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6651,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6652,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6653,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5412,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6654,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6655,
	TextGenerator_t842_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5447,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5316,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5542,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3726,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6666,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3572,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5545,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5344,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5546,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5303,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5318,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5317,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5325,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5290,
	Canvas_t418_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5524,
	CanvasGroup_t546_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3698,
	CanvasGroup_t546_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5505,
	CanvasGroup_t546_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6668,
	CanvasGroup_t546_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5302,
	CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6671,
	CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5306,
	CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5577,
	CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5298,
	CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6672,
	CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6673,
	CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5294,
	CanvasRenderer_t809_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5291,
	RectTransformUtility_t959_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6675,
	RectTransformUtility_t959_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6677,
	RectTransformUtility_t959_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5305,
	Request_t1166_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t1166_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t1166_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t1166_CustomAttributesCacheGenerator_Request_get_sourceId_m6682,
	Request_t1166_CustomAttributesCacheGenerator_Request_get_appId_m6683,
	Request_t1166_CustomAttributesCacheGenerator_Request_get_domain_m6684,
	Response_t1168_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t1168_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t1168_CustomAttributesCacheGenerator_Response_get_success_m6693,
	Response_t1168_CustomAttributesCacheGenerator_Response_set_success_m6694,
	Response_t1168_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6695,
	Response_t1168_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6696,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6701,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6702,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6703,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6704,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6705,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6706,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6707,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6708,
	CreateMatchRequest_t1171_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6709,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6712,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6713,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6714,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6715,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6716,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6717,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6718,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6719,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6720,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6721,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6722,
	CreateMatchResponse_t1172_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6723,
	JoinMatchRequest_t1173_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t1173_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t1173_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6727,
	JoinMatchRequest_t1173_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6728,
	JoinMatchRequest_t1173_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6729,
	JoinMatchRequest_t1173_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6730,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6733,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6734,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6735,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6736,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6737,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6738,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6739,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6740,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6741,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6742,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6743,
	JoinMatchResponse_t1174_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6744,
	DestroyMatchRequest_t1175_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t1175_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6748,
	DestroyMatchRequest_t1175_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6749,
	DropConnectionRequest_t1176_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t1176_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t1176_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6752,
	DropConnectionRequest_t1176_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6753,
	DropConnectionRequest_t1176_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6754,
	DropConnectionRequest_t1176_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6755,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6758,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6759,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6760,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6761,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6762,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6763,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6764,
	ListMatchRequest_t1177_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6765,
	MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6768,
	MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6769,
	MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6770,
	MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6771,
	MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6772,
	MatchDirectConnectInfo_t1178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6773,
	MatchDesc_t1180_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t1180_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t1180_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t1180_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t1180_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t1180_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t1180_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t1180_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t1180_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6777,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6778,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_name_m6779,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_name_m6780,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6781,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6782,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6783,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6784,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6785,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6786,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6787,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6788,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6789,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6790,
	MatchDesc_t1180_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6791,
	ListMatchResponse_t1182_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t1182_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6795,
	ListMatchResponse_t1182_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6796,
	AppID_t1183_CustomAttributesCacheGenerator,
	SourceID_t1184_CustomAttributesCacheGenerator,
	NetworkID_t1185_CustomAttributesCacheGenerator,
	NodeID_t1186_CustomAttributesCacheGenerator,
	NetworkMatch_t1191_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m7287,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1359_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1359_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m7293,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1359_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m7294,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1359_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m7296,
	JsonArray_t1192_CustomAttributesCacheGenerator,
	JsonObject_t1193_CustomAttributesCacheGenerator,
	SimpleJson_t1196_CustomAttributesCacheGenerator,
	SimpleJson_t1196_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6840,
	SimpleJson_t1196_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6852,
	SimpleJson_t1196_CustomAttributesCacheGenerator_SimpleJson_t1196____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t1194_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t1194_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7300,
	PocoJsonSerializerStrategy_t1195_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t1195_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6869,
	PocoJsonSerializerStrategy_t1195_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6870,
	ReflectionUtils_t1210_CustomAttributesCacheGenerator,
	ReflectionUtils_t1210_CustomAttributesCacheGenerator_ReflectionUtils_t1210_ReflectionUtils_GetConstructorInfo_m6895_Arg1_ParameterInfo,
	ReflectionUtils_t1210_CustomAttributesCacheGenerator_ReflectionUtils_t1210_ReflectionUtils_GetContructor_m6900_Arg1_ParameterInfo,
	ReflectionUtils_t1210_CustomAttributesCacheGenerator_ReflectionUtils_t1210_ReflectionUtils_GetConstructorByReflection_m6902_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t1362_CustomAttributesCacheGenerator,
	ConstructorDelegate_t1203_CustomAttributesCacheGenerator_ConstructorDelegate_t1203_ConstructorDelegate_Invoke_m6880_Arg0_ParameterInfo,
	ConstructorDelegate_t1203_CustomAttributesCacheGenerator_ConstructorDelegate_t1203_ConstructorDelegate_BeginInvoke_m6881_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1205_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1206_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1207_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1208_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1209_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t1212_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1008_CustomAttributesCacheGenerator,
	RequireComponent_t1002_CustomAttributesCacheGenerator,
	WritableAttribute_t1218_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t1219_CustomAttributesCacheGenerator,
	GUIStateObjects_t1230_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6935,
	Achievement_t1233_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t1233_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t1233_CustomAttributesCacheGenerator_Achievement_get_id_m6957,
	Achievement_t1233_CustomAttributesCacheGenerator_Achievement_set_id_m6958,
	Achievement_t1233_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6959,
	Achievement_t1233_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6960,
	AchievementDescription_t1234_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t1234_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6967,
	AchievementDescription_t1234_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6968,
	Score_t1235_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t1235_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t1235_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6977,
	Score_t1235_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6978,
	Score_t1235_CustomAttributesCacheGenerator_Score_get_value_m6979,
	Score_t1235_CustomAttributesCacheGenerator_Score_set_value_m6980,
	Leaderboard_t1075_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t1075_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t1075_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t1075_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_get_id_m6988,
	Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_set_id_m6989,
	Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6990,
	Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6991,
	Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_get_range_m6992,
	Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_set_range_m6993,
	Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6994,
	Leaderboard_t1075_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6995,
	PropertyAttribute_t1249_CustomAttributesCacheGenerator,
	TooltipAttribute_t1011_CustomAttributesCacheGenerator,
	SpaceAttribute_t1009_CustomAttributesCacheGenerator,
	RangeAttribute_t1006_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1012_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1010_CustomAttributesCacheGenerator,
	StackTraceUtility_t1252_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m7038,
	StackTraceUtility_t1252_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m7041,
	StackTraceUtility_t1252_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m7043,
	SharedBetweenAnimatorsAttribute_t1253_CustomAttributesCacheGenerator,
	ArgumentCache_t1260_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t1260_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t1260_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t1260_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t1260_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t1260_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t1264_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t1264_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t1264_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t1264_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t1264_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t1266_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t1269_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t1269_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t1270_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t1271_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t1272_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1000_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t1274_CustomAttributesCacheGenerator,
};
